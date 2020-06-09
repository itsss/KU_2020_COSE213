#include <stdio.h>

int main(void) {
    int val = 10;
    int *vp = NULL;
    int **vpp = NULL;
    
    vp = &val;
    vpp = &vp;
    
    printf("%d %d %d\n", val, vp, vpp);
    printf("%d %d %d\n", val, *vp, *vpp);
    printf("%d %d %d\n", val, *vp, **vpp);
    
    return 0;
}
