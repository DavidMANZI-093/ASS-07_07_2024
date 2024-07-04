// 4. Largest of the five

#include<stdio.h>

int main() {

    int num1, num2, num3, num4, num5, one_of_two, largest;

    printf("\nEnter the first number: ");
    scanf("%d", &num1);

    printf("\nEnter the second number: ");
    scanf("%d", &num2);

    printf("\nEnter the third number: ");
    scanf("%d", &num3);

    printf("\nEnter the fourth number: ");
    scanf("%d", &num4);
    
    printf("\nEnter the fifth number: ");
    scanf("%d", &num5);

    one_of_two = (num1 > num2)? num1 : num2;
    one_of_two = (one_of_two > num3)? one_of_two : num3;
    one_of_two = (one_of_two > num4)? one_of_two : num4;
    largest = (one_of_two > num5)? one_of_two : num5;

    printf("\nThe largest number is: %d\n", largest);

    return 0;
}