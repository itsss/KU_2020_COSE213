#include <stdio.h>

int main() {
    int arr[2][4] = {1,2,3,4,5,6,7,8,};
    int (*ap)[4];
    
    ap = arr;
    printf("%d\n", *ap[1]); // 5
}
