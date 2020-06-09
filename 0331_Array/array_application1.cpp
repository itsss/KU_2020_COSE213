#include <stdio.h>

int any_prn(int *ap);

int main(void) {
    int ary[3] = {1,2,3};
    any_prn(ary); // 배열을 인수로 사용, 배열 주소를 옮겨줌
    return 0;
}

int any_prn(int *ap) { // 포인터로 받음
    for(int i = 0; i < 3; i++) {
        printf("%5d", *(ap+i));
    }
    printf("\n");
    return 0;
}
