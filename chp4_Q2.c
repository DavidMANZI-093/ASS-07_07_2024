// 2. Find the range

#include<stdio.h>
int main() {

    int num;

    printf("\nEnter any number: ");
    scanf("%d", &num);

    if(num >= 0 && num <= 9) {
        printf("\nThe number provided is between 0 and 9!\n\n");
    } else if(num >= 10 && num <= 19) {
        printf("\nThe number provided is between 10 and 19!\n\n");
    } else if(num >= 20 && num <= 29) {
        printf("\nThe number provided is between 20 and 29!\n\n");
    } else if(num >= 30 && num <= 39) {
        printf("\nThe number provided is between 30 and 39!\n\n");
    } else {
        printf("\nThe number provided doesn't coresspond to any range!\n\n");
    }

    return 0;
}