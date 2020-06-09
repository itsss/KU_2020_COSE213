#include <stdio.h>

int main() {
    int num1;
    int *num2; // pointer val
    num1 = 10;
    num2 = &num1;
    
    printf("%d\n", num1);
    printf("%d\n", &num1);
    
    printf("%d\n", num2);
    printf("%d\n", *num2); // 간접 참조 연산자 (num2가 가르키는 변수 num1 값 출력)
}
