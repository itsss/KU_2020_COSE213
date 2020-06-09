#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("%d %d\n", num1, num2);
    return 0;
}

void swap(int *a, int *b) {
    int temp;
    
    if(*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
