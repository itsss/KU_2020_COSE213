#include <stdio.h>

int main(void) {
    int x[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int *pp[3];
    int (*p)[3];
    
    p = &x[1];
    pp[0] = x[2];
    
    printf("%d %d\n", *p[0], p[1][0]); // 4 7
    printf("%d %d\n", *pp[0], pp[0][0]); // 7 7
    return 0;
}
