// 1. Smallest of the three

#include<stdio.h>
int main() {
    
    int numA, numB, numC, one_of_two, smallN;

    printf("\nEnter the first number: ");
    scanf("%d", &numA);

    printf("\nEnter the second number: ");
    scanf("%d", &numB);

    printf("\nEnter the third number: ");
    scanf("%d", &numC);

    one_of_two = (numA < numB)? numA : numB;
    smallN = (one_of_two < numC)? one_of_two : numC;

    printf("\nThe smallest of the three numbers is: %d\n", smallN);

    return 0;
}