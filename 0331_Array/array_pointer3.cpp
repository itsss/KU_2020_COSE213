#include <stdio.h>

int main(void) {
    int arr[3] = {1,2,3};
    int *ap;
    
    ap = arr;
    printf("%d\n", ap);
    printf("%d\n", *ap);
    printf("%d %d %d\n", ap[0], ap[1], ap[2]);
}
