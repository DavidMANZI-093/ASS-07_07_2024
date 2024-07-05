// Q3.b.i. Divide X by Y - The use of `GOTO`

#include<stdio.h>
int main() {

    double x, y, qQ;

    printf("\nEnter a number: ");
    scanf("%lf", &x);

    retry:

    printf("\nEnter its dividor: ");
    scanf("%lf", &y);

    if(y == 0) {
        printf("\nThe divisor can't be zero!\n");
        goto retry;
    }

    qQ = x / y;

    printf("\nThe quotioent of dividing %.1f by %.1f is : %.1f\n", x, y, qQ);

    return 0;
}