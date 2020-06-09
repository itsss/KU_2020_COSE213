#include <stdio.h>
struct student {
    int num;
    char name[20];
    double grade;
};
int main(void) {
    struct student s[3] = {{101, "유재석", 2.4}, {202, "강호동", 3.7}, {303, "신동엽", 4.4}};
    struct student max;
    int i;
    printf("-----학생정보-----\n");
    for (i = 0; i < 3; i++) {
        printf("학번: %d\t", s[i].num);
        printf("이름: %s\t", s[i].name);
        printf("학점: %.1lf\n", s[i].grade);
    }
    max = s[0];
    for(i = 1; i < 3; i++) if (max.grade< s[i].grade) max = s[i];

    printf("\n-----최고학점학생정보-----\n");
    printf("학번: %d\t", max.num);
    printf("이름: %s\t", max.name);
    printf("학점: %.1lf\n", max.grade);
    return 0;
}
