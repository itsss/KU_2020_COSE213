#include <stdio.h>

struct point {
    int x; int y;
};

struct rect {
    int w; int h;
    struct point A;
    struct point B;
};

int main(void) {
    struct rect r;
    int area, circum;
    
    printf("Enter A location: ");
    scanf("%d %d", &r.A.x, &r.A.y);
    printf("Enter B location: ");
    scanf("%d %d", &r.B.x, &r.B.y);
    
    r.w = r.B.x - r.A.x;
    r.h = r.A.y - r.B.y;
    
    area = r.w * r.h;
    circum = 2 * r.w + 2 * r.h;
    printf("면적: %d, 둘레: %d\n", area, circum);
    return 0;
}
