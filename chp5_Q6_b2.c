// Q3.b.ii. All even numbers between 1 n 10 - The use of `CONTINUE`

#include<stdio.h>
int main() {

    int sbjNum;

    printf("\nAll Even numbers between 1 and 100: \n\n");

    for(sbjNum = 1; sbjNum <= 10; sbjNum++) {

        if(sbjNum % 2 != 0) {
            continue;
        }
        
        printf("%d\n", sbjNum);
    }

    return 0;
}