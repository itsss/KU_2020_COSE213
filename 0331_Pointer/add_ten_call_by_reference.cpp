#include <stdio.h>
int add_ten(int *b);

int main() {
    int a = 10;
    add_ten(&a);
    printf("%d", a);
    return 0;
}

int add_ten(int *b) {
    *b = *b + 10;
    return *b;
}
