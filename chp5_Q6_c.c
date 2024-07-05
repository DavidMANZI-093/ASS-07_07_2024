// Q3.c. Collatz conjecture - Use of nested loops
// !! - Learn what Collatz conjecture is first.

#include<stdio.h>
int main() {
	int num;
	
	printf("\nEnter any number: ");
	scanf("%d", &num);
	
	printf("\n");
	
	printf("[%d] ", num);
	
	for(int count = 1; count <= num; count++) {
		printf("*");
	}
	printf("\n");
	
	for(int ctrlFlag = 1; ctrlFlag <= 10; ) {
		if(num % 2 == 0) {
			num = num / 2;
			printf("[%d] ", num);
			for(int count = 1; count <= num; count++) {
				printf("*");
			}
			printf("\n");
		} else {
			num = (num * 3) + 1;
		}
		
		if(num == 1) {
			ctrlFlag/ += 1; 
		}
	}
	
	return 0;
}