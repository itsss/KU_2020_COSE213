#include <stdio.h>

int main() {
    int x=10, y=20;
    int *p;
    
    p = &x;
    printf("%d\n", p);
    printf("%d\n", *p);
    
    p = &y;
    printf("%d\n", p);
    printf("%d\n", *p);
    return 0;
}
