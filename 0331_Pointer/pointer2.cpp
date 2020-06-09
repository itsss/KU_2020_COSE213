#include <stdio.h>

int main() {
    int num1;
    int *num2; // pointer val
    num1 = 10;
    num2 = &num1;
    
    printf("%d\n", num1); //10
    printf("%d\n", *num2); //10
    
    *num2 = 100;
    printf("%d\n", num1); //100
    printf("%d\n", *num2); //100
}
