// 3. Days of a month

#include<stdio.h>
int main() {

    int month;

    printf("\nEnter any month of a year: ");
    scanf("%d", &month);

    switch(month) {

        case 1:
            printf("\nJanuary has 31 days.\n");
        break;

        case 2:
            printf("\nFebruary has 28/29 days.\n");
        break;

        case 3:
            printf("\nMarch has 31 days.\n");
        break;

        case 4:
            printf("\nApril has 30 days.\n");
        break;

        case 5:
            printf("\nMay has 31 days.\n");
        break;

        case 6:
            printf("\nJune has 30 days.\n");
        break;

        case 7:
            printf("\nJuly has 31 days.\n");
        break;

        case 8:
            printf("\nAugust has 31 days.\n");
        break;

        case 9:
            printf("\nSeptemper has 30 days.\n");
        break;

        case 10:
            printf("\nOctober has 31 days.\n");
        break;

        case 11:
            printf("\nNovember has 30 days.\n");
        break;

        case 12:
            printf("\nDecember has 31 days.\n");
        break;

        default:
            printf("\nInvalid month number!\n");
        break;
    }

    return 0;
}