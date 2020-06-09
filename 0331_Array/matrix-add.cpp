#include <stdio.h>

int main(void) {
    int A[3][3] = {{2,3,0},{8,9,1},{7,0,5}};
    int B[3][3] = {{1,0,0},{1,0,0},{1,0,0}};
    int C[3][3];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
