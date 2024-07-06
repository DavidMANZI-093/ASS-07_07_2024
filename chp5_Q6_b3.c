// Q3.b.iii. Digit counter - The use of `BREAK`

#include<stdio.h>
int main() {
	
	int num, sbj, i;
	
	printf("\nEnter any integer: ");
	scanf("%d", &num);
	
	sbj = num;
	i = 0; 
	while(1) {
		sbj = sbj / 10;
		i++;

        if(sbj == 0) {
            break;
        }
	}
	
	printf("\n%d is comprised of %d digits.\n", num, i);
		
	return 0;
}