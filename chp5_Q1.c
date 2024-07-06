// 1. All even numbers between 1 - 10

#include<stdio.h>
int main() {

    int sbjNum;

    printf("\nAll Even numbers between 1 and 10: \n\n");

    for(sbjNum = 2; sbjNum <= 10; sbjNum += 2) {
        printf("%d\n", sbjNum);
    }

    return 0;
}