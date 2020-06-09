#include <stdio.h>

int main(void) {
    char text = 65;
    int num1 = 10;
    double num2 = 10.2;
    void *p1, *p2, *p3;
    
    p1 = &text;
    p2 = &num1;
    p3 = &num2; // 자료형과 상관 없이 사용 가능
    
    printf("%d\n", *(char *) p1);
    printf("%d\n", *(int  *) p2);
    printf("%.1f\n", *(double *)p3);
    
    return 0;
}
