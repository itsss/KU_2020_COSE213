#include <stdio.h>

int main() {
    int *p = NULL;
    int i = 10;
    
    p = &i;
    printf("%d\n", p);
    p++;
    printf("%d\n", p);
    p--;
    printf("%d\n", p);
}
