// 7. Resitor color code assigner

// I was thinking about MAPS ariko yahita atwica tuu!

#include<stdio.h>
int main() {

    char colorcode;

    printf("\nEnter a color code (Single character code): ");
    scanf("%c", &colorcode);

    switch(colorcode) {

        case 'B':
        case 'b':
        case '0':
            printf("\nBlack color.\n");
        break;

        case 'W':
        case 'w':
        case '1':
            printf("\nBrown color.\n");
        break;

        case 'R':
        case 'r':
        case '2':
            printf("\nRed color.\n");
        break;

        case 'O':
        case 'o':
        case '3':
            printf("\nOrange color.\n");
        break;

        case 'Y':
        case 'y':
        case '4':
            printf("\nYellow color.\n");
        break;

        case 'G':
        case 'g':
        case '5':
            printf("\nGreen color.\n");
        break;

        case 'L':
        case 'l':
        case '6':
            printf("\nBlue color.\n");
        break;

        case 'V':
        case 'v':
        case '7':
            printf("\nViolet color.\n");
        break;

        case 'E':
        case 'e':
        case '8':
            printf("\nGrey color.\n");
        break;

        case 'H':
        case 'h':
        case '9':
            printf("\nWhite color.\n");
        break;

        default:
            printf("\nInvalid color code.\n");
        break;

    }


    return 0;
}