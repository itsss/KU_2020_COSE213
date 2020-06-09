#include <stdio.h>

int main(void) {
    int arr[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int (*ap)[3];
    
    ap = arr;
    printf("%d %d %d\n", *(arr[0]+0), *(arr[0]+1), *(arr[0]+2)); // 10 20 30
    printf("%d %d %d\n", *(ap[0]+3), *(ap[0]+4), *(ap[0]+5)); // 40 50 60
    return 0;
}
