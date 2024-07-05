// Q3.b.i. Divide X by Y - The use of `GOTO`

#include<stdio.h>
int main() {
    double num, divisor, quotient;

    printf("\nEnter a number: ");
    scanf("%lf", &num);

    retry:
    printf("\nEnter its dividor: ");
    scanf("%lf", &divisor);

    if(divisor == 0) {
        printf("\nThe divisor can't be zero!\n");
        goto retry;
    }

    quotient = num / divisor;

    printf("\nThe quotient of dividing %.1f by %.1f is : %.1f\n", num, divisor, quotient);

    return 0;
}