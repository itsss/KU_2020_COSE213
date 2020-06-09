#include <stdio.h>

int main() {
    int *p = NULL;
    int i = 10;
    
    p = &i;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", (*p)++);
    printf("%d\n", i);
    
    printf("%d\n", *p++);
    printf("%d\n", *p--);
    printf("%d\n", *p);
    
    return 0;
}
