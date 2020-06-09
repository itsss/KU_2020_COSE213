#include <stdio.h>

int main() {
    int arr[2][4];
    int (*ap)[4];
    
    ap = arr;
    printf("%d %d %d\n", sizeof(arr), sizeof(ap), sizeof(ap[0]));
    // 32 8 16
}
