#include <stdio.h>

int main(void) {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int (*ap)[4];
    
    ap = arr;
    printf("%d\n", *ap[2]); // 9
    printf("%d\n", ap[1][3]); // 8
    
    ap = &arr[1];
    printf("%d\n", *ap[0]); // 5
    printf("%d\n", ap[1][1]); // 10
    
    return 0;
}
