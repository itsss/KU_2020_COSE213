#include <stdio.h>

int main(void) {
    int a[] = {10, 20, 30, 40, 50};
    printf("%d\n", a);
    printf("%d\n", a+1);
    
    printf("%d\n", *a);
    printf("%d\n", *(a+1));
}
