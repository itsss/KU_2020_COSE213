#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

typedef struct node{
    int data;
    struct node * leftChild;
    struct node * rightChild;
}node;
typedef node* treePointer;

treePointer create(int data) {
    treePointer nd;
    nd = (treePointer)malloc(sizeof(node));
    nd->leftChild = NULL;
    nd->rightChild = NULL;
    nd->data = data;

    return nd;
}

int front = 0; int rear = 0;
treePointer queue[MAX_QUEUE_SIZE];

void addq(treePointer ptr) {
    queue[++rear] = ptr;
}

treePointer deleteq() {
    return queue[++front];
}

void inorder(treePointer ptr) {
    if ( ptr ) {
        inorder(ptr->leftChild);
        printf("%c ", ptr->data);
        inorder(ptr->rightChild);
    }
}

void preorder(treePointer ptr) {
    if ( ptr ) {
        printf("%c ", ptr->data);
        preorder(ptr->leftChild);
        preorder(ptr->rightChild);
    }
}

void postorder(treePointer ptr) {
    if ( ptr ) {
        postorder(ptr->leftChild);
        postorder(ptr->rightChild);
        printf("%c ", ptr->data);
    }
}

void levelOrder(treePointer ptr) {
    if (!ptr) return;
    addq(ptr);
    while (1) {
        ptr = deleteq();
        if (ptr)
        {
            printf("%c ", ptr->data);
            if (ptr->leftChild)
                addq(ptr->leftChild);
            if (ptr->rightChild)
                addq(ptr->rightChild);
        }
        else break;
    }
}

treePointer copy(treePointer original) {
    treePointer temp;
    if ( original ) {
        temp = (treePointer) malloc ( sizeof(treePointer) );
        temp -> leftChild = copy(original -> leftChild);
        temp -> rightChild = copy(original -> rightChild);
        temp -> data = original -> data;
        return temp;
    }
    return 0;
}

int main(void)
{
    treePointer a = create('A');
    treePointer b = create('B');
    treePointer c = create('C');
    treePointer d = create('D');
    treePointer e = create('E');
    treePointer f = create('F');
    treePointer g = create('G');
    treePointer h = create('H');
    treePointer i = create('I');
    treePointer j = create('J');
    treePointer k = create('K');
    treePointer l = create('L');
    treePointer m = create('M');

    a -> leftChild = b;
    a -> rightChild = c;
    b -> leftChild = d;
    b -> rightChild = e;
    d -> leftChild = h;
    d -> rightChild = i;
    e -> leftChild = j;
    c -> leftChild = f;
    c -> rightChild = g;
    f -> rightChild = k;
    g -> leftChild = l;
    g -> rightChild = m;
    
    // new tree
    
    int option;
    scanf("%d", &option);
    
    if(option == 1) {
        printf("original tree를 새로운 new tree로 복사: ");
        treePointer n = copy(a);
        printf("복사 완료!");
    }
    else if(option == 2) {
        printf("new tree의 preorder traversal result: ");
        preorder(a);
    }
    else if(option == 3) {
        printf("new tree의 inorder traversal result: ");
        inorder(a);
    }
    else if(option == 4) {
        printf("new tree의 postorder traversal result: ");
        postorder(a);
    }
    else if(option == 5) {
        printf("new tree의 levelorder traversal result: ");
        levelOrder(a);
    }
    else {
        printf("올바른 옵션값(1-5) 를 입력했는지 확인하세요.");
    }
    return 0;
}
