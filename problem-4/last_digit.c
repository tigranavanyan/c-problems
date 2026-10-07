#include <stdio.h>

int main()
{
	int num = 0;
	int last_digit = 0;

	printf("Enter a number: \n");
	scanf("%d", &num);

	last_digit = num % 10;
	printf("Last digit is %d\n", last_digit);
	
}
