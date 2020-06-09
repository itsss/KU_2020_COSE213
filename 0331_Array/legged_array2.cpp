#include <stdio.h>

int main(void) {
    char *fruits[4] = {
        "apple",
        "blueberry",
        "orange",
        "melon"
    }; //legged array
    
    for(int i = 0; i <= 3; i++) {
        for(int j = 0; j <= 8; j++) {
            if(fruits[i][j] == '\0') break;
            printf("%c", fruits[i][j]);
        }
        printf("\n");
    }
}
