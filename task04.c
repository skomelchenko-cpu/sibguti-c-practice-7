#include <stdio.h>
void sort_three(double *a, double *b, double *c){
    double temp;
    if (*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main(void){
    double a, b, c;
    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3){
        printf("Invalid input.\n");
        return 0;
    }
    printf("Before: %.4f %.4f %.4f\n", a, b, c);
    sort_three(&a, &b, &c);
    printf("After:  %.4f %.4f %.4f\n", a, b, c);
    return 0;
}
