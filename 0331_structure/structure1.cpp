#include <stdio.h>

struct student {
    int number;
    char name[10];
    double grade;
}; // 구조체 선언

int main(void) {
    struct student s = {12345678, "홍길동", 4.3};
    // 구조체 변수 선언 및 초기화
    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %f\n", s.grade); // 구조체 멤버 참조
    return 0;
}
