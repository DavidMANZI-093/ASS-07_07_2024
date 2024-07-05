// 3. Average of all numbers 500 - 1000

#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;
    int num;

    for (num = 500; num <= 1000; num++) {
        sum += num;
        count++;
    }

    double average = (double) sum / count;
    printf("\nThe Average of all numbers between 500 and 1000: %.2f\n", average);

    return 0;
}