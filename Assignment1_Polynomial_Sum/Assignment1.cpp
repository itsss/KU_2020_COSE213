// Input:
//3 8 3 7 1 1 0
//3 10 3 3 2 1 0
//
//A(X) = 8x^3  7x^1  1x^0
//B(X) = 10x^3  3x^2  1x^0
//C(X) = A(X) + B(X) = 18x^3  3x^2  7x^1  2x^0

#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 100

///////////
#define COMPARE(x,y) (((x) < (y)) ? -1 : ((x) == (y)) ? 0 : 1)
///////////

typedef struct {
    float coef;
    int expon;
} polynomial;

polynomial terms[MAX_TERMS];
int avail = 0;

int start_a, start_b, start_c, finish_a, finish_b, finish_c;

void attach(float coefficient, int exponent) {
    if (avail >= MAX_TERMS) {
        printf("항이 많음");
        return;
    }
    terms[avail].coef = coefficient;
    terms[avail++].expon = exponent;
}

void print_polynomial(int a, int b) {
    for( ; a < b; a++) {
        printf("%3.0fx^%d", terms[a].coef, terms[a].expon);
    }
    printf("%3.0fx^%d", terms[b].coef, terms[b].expon);
    printf("\n");
}

void print_result() {
    for( ; start_c < finish_c; start_c++) {
        printf("%3.0fx^%d", terms[start_c].coef, terms[start_c].expon);
    }
    printf("\n");
}

void padd(int starta, int finisha, int startb, int finishb, int *startd, int *finishd) {
    float coefficient;
    *startd = avail;
    while ( starta <= finisha && startb <= finishb ) {
        switch ( COMPARE(terms[starta].expon, terms[startb].expon) ) {
            case -1: /* a의 expon < b의 expon */
                attach(terms[startb].coef, terms[startb].expon);
                startb++;
                break;
            case 0: /* a의 expon = b의 expon */
                coefficient = terms[starta].coef + terms[startb].coef;
                if ( coefficient )
                    attach(coefficient, terms[starta].expon);
                starta++; startb++;
                break;
            case 1: /* a의 expon > b의 expon */
                attach(terms[starta].coef, terms[starta].expon);
                starta++;
        }
    }
    for( ; starta<=finisha; starta++ ) // A(x)의 나머지 항 추가
            attach(terms[starta].coef, terms[starta].expon);
    for( ; startb<=finishb; startb++ ) // B(x)의 나머지 항 추가
            attach(terms[startb].coef, terms[startb].expon);
    *finishd = avail-1;
}

int main() {
    int i, j;
    scanf("%d", &i); // 다항식 A 항 개수 입력 받기
    
    // 다항식 A 입력 받기
    start_a = 0;
    for(int j = start_a; j < i; j++) {
        scanf("%f", &terms[j].coef);
        scanf("%d", &terms[j].expon);
    }
    finish_a = i-1;
    print_polynomial(start_a, finish_a);
    
    scanf("%d", &j); // 다항식 B 항 개수 입력 받기
    start_b = finish_a + 1;
    finish_b = start_b + (j);
    // 다항식 B 입력 받기
    for(int k = start_b; k < finish_b; k++) {
        scanf("%f", &terms[k].coef);
        scanf("%d", &terms[k].expon);
    }
    avail = finish_b + 1;
    print_polynomial(start_b, finish_b-1);
    
    padd(start_a, finish_a, start_b, finish_b, &start_c, &finish_c);
    
    print_result();
}
