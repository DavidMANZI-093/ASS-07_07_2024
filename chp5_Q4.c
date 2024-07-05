// 4. Product of all numbers 100 - 200
// You might wanna take a guess before compiling it ;)
// a guess to why I used `double` for `product`...

#include <stdio.h>
int main() {
    double i, product = 1;

    for (i = 100; i <= 200; i++) {
        product *= i;
        // printf("%.2f\n", product);  --- Uncomment this line for more satisfaction..
    }

    printf("\nThe product of all numbers between 100 and 200 is: %.2f\n", product);

    return 0;
}