// 5. All Prime numbers 1 - 100

#include<stdio.h>
int main() {
    int sbjNum, divisor, divCount;

    printf("\nPrime numbers between 1 and 100.\n\n");

    for(sbjNum = 1; sbjNum <= 100; sbjNum++) {

        for(divisor = 1; divisor <= sbjNum; divisor++) {

            if(sbjNum % divisor == 0 || sbjNum == 1) {
                divCount += (sbjNum == 1)? 2 : 1;
            }
            
            if(divisor == sbjNum && divCount == 2) {
                printf("[%d]\n", sbjNum);
            }
        }

        divCount = 0;
    }

    return 0;
}