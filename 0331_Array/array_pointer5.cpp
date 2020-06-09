#include <stdio.h>

int main(void) {
    int arr[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *ap;
    
    ap = *arr;
    printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
    printf("%d %d %d\n", *(ap+6), *(ap+7), *(ap+8));
    return 0;
}
