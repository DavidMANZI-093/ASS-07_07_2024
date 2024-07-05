// Q3.c. Bubble sorting - Use of nested loops.

#include<stdio.h>

int main() {
    int arraY[6] = {54, 23, 41, 37, 11, 45};
    int length = sizeof(arraY) / sizeof(arraY[0]);
    int ctrlFlag = 0;

	printf("\nArray before sorting:\n\n");

    for(int i = 0; i < length; i++) {
        printf("%d ", arraY[i]);
    }

    while(ctrlFlag != length - 1) {

        ctrlFlag = 0;

        for(int i = 0; i < length - 1; i++) {

            if(arraY[i] > arraY[i + 1]) {

                int buffer = arraY[i + 1];
                arraY[i + 1] = arraY[i];
                arraY[i] = buffer;
                ctrlFlag = 0;

            } else {
                ctrlFlag += 1;
            }

        }
    }

	printf("\n\nArray after sorting:\n\n");

    for(int i = 0; i < length; i++) {
        printf("%d ", arraY[i]);
    }

    printf("\n");

    return 0;
}