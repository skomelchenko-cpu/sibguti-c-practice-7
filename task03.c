#include <stdio.h>
static double cube_of_sum(double a, double b){
    double sum = a + b;
    return sum * sum * sum;
}
int main(void){
    double a, b;
    int ch;
    printf("Enter pairs of numbers (Ctrl+D to finish):\n");
    while (1){
        int status = scanf("%lf %lf", &a, &b);
        if (status == EOF){
            break;
        }
        if (status != 2){
            printf("Invalid input. Enter two numbers.\n");
            while ((ch = getchar()) != '\n' && ch != EOF){
            }
            if (ch == EOF){
                break;
            }
            continue;
        }
        printf("Result: %.4f\n", cube_of_sum(a, b));
    }
    return 0;
}
