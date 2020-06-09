#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main() {
    struct point A;
    struct point B;
    double xdiff, ydiff, dist;
    
    printf("dist of dot 1(x y): ");
    scanf("%d %d", &A.x, &A.y);
    
    printf("dist of dot 2(x y): ");
    scanf("%d %d", &B.x, &B.y);
    
    xdiff = B.x - A.x;
    ydiff = B.y - A.y;
    
    dist = sqrt(xdiff * xdiff + ydiff * ydiff);
    printf("dist of two dots: %.2f\n", dist);
    return 0;
}
