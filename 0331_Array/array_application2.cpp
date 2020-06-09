#include <stdio.h>

int any_prn(int (*ap)[4]); // void ary_prn(int (*)[4]);

int main(void) {
    int ary[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    any_prn(ary); // 2차원 배열을 인수로 사용, 배열 주소 넘겨줌
    return 0;
}

int any_prn(int (*ap)[4]) { // 배열 포인터로 받음
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%5d", *(*(ap+i)+j));
        }
        printf("\n");
    }
    return 0;
}
