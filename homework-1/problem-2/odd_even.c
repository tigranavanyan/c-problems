#include <stdio.h>

int main() 
{
	int num = 0;

	printf("Enter a number: \n");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("%d -> even: \n", num);
	} else {
		printf("%d -> odd: \n", num);
	}

	return 0;
}
