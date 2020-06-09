#include <stdio.h>

int main(void) {
    char *fruits[4] = {
        "apple",
        "blueberry",
        "orange",
        "melon"
    }; //legged array
    
    for(int i = 0; i <= 3; i++) {
        printf("%s\n", fruits[i]);
    }
}
