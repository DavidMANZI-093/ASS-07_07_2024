// 6. Quadratic equation evaluator

#include<stdio.h>
#include<math.h>
int main() {

    double cA, cB, cC, delta, rt1, rt2;

    printf("\nQuadratic equation evaluator - [a(x)^2 + b(x) + c = 0].\n");

    printf("\nEnter the coefficient 'a': ");
    scanf("%lf", &cA);

    while(cA == 0) {
        printf("\nCoefficient 'a' cannot be zero. Please enter a non-zero value: ");
        scanf("%lf", &cA);
    }

    printf("\nEnter the coefficient 'b': ");
    scanf("%lf", &cB);

    printf("\nEnter the coefficient 'c': ");
    scanf("%lf", &cC);

    delta = (cB * cB) - (4 * cA * cC);

    if(delta > 0) {
        rt1 = (-cB + sqrt(delta)) / (2 * cA);
        rt2 = (-cB - sqrt(delta)) / (2 * cA);

        printf("\n\nThe equation has two distinct roots.");
        printf("\nRoot 1: %.1f", rt1);
        printf("\nRoot 2: %.1f\n", rt2);
    } else if(delta == 0) {
        rt1 = rt2 = -cB / (2 * cA);

        printf("\n\nThe equation has equal roots.");
        printf("\nRoot 1: %.1f", rt1);
        printf("\nRoot 2: %.1f\n", rt2);
    } else {
        printf("\nThe equation has complex roots (Not computable).\n");
    }

    return 0;
}