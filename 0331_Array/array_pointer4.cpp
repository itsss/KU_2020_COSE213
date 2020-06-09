#include <stdio.h>

int main(void) {
    int arr[3] = {1,2,3};
    int num = 5;
    int *ap[2];
    
    ap[0] = arr;
    ap[1] = &num;
    printf("%d %d\n", ap[0], ap[1]);
    printf("%d %d\n", *ap[0], *ap[1]);
    
    printf("%d %d %d\n", ap[0][0], ap[0][1], ap[0][2]);
    printf("%d %d %d\n", *ap[0], *(ap[0]+1), *(ap[0]+2)); // 동일한 기능을 함
}
