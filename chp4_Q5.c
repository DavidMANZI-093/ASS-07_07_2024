// 5. Evaluating test scores

#include<stdio.h>

int main() {

    double test_score;

    printf("\nEnter your marks(out of 100): ");
    scanf("%lf", &test_score);

    if(test_score >= 90 && test_score <= 100) {
        printf("\n%.1f - Grade A.\n", test_score);
    } else if(test_score >= 80 && test_score <= 89) {
        printf("\n%.1f - Grade B.\n", test_score);
    } else if(test_score >= 70 && test_score <= 79) {
        printf("\n%.1f - Grade C.\n", test_score);
    } else if(test_score >= 60 && test_score <= 69) {
        printf("\n%.1f - Grade D.\n", test_score);
    } else if(test_score >= 00 && test_score <= 59) {
        printf("\n%.1f - Grade F.\n", test_score);
    } else {
        printf("\nInvalid marks!\n");
    }

    return 0;
}