#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *NODE;
typedef struct listNode {
    int data;
    NODE link;
}; // 과제 기본 Format

void ListNodeinsert(NODE *first, NODE x, int data) // Program 4.2 List 삽입
{
    NODE temp;
    temp = (NODE)malloc(sizeof(*temp));
    temp->data = data;
    if (*first) {
        temp->link = x->link;
        x->link = temp;
    }
    else {
        temp->link = NULL;
        *first = temp;
    }
}

void ListNodePrint(NODE first) // Program 4.4 List 출력
{
    for (; first; first = first->link)
        printf("%d\n", first->data);
    printf("\n");

}

NODE invert(NODE lead) { // Program 4.16 Inverting a singly linked list
    NODE middle, trail;
    middle = NULL;
    
    while (lead) {
        trail = middle;
        middle = lead;
        lead = lead->link;
        middle->link = trail;
    }
    return middle;
}

NODE concatenate(NODE ptr1, NODE ptr2) { // Program 4.17 Concatenating singly linked lists
    NODE temp;
    if (!ptr1) return ptr2;
    if (!ptr2) return ptr1;

    for (temp = ptr1; temp->link; temp = temp->link);
    temp->link = ptr2;
    return ptr1;
}


int main()
{
    NODE first = NULL;

    printf("<노드 생성 후>\n");
    ListNodeinsert(&first, first, 10);
    ListNodeinsert(&first, first, 20);
    ListNodePrint(first);

    printf("<50 삽입 후>\n");
    ListNodeinsert(&first, first, 50);
    
    ListNodePrint(first);
    
    printf("<역순>\n");
    first = invert(first);
    ListNodePrint(first);
}
