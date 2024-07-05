// 2. Sum of all numbers 20 - 30

#include<stdio.h>
int main() {

    int num, sum = 0;

    for(num = 20; num <= 30; num++) {

        sum += num;

    }

    printf("\nThe sum of all numbers between 20 and 30 is: %d\n", sum);

    return 0;
}