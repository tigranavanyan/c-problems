#include <stdio.h>

int main() 
{
	int num = 0;
	int sum = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i) {
		sum += i;
	}

	printf("Sum -> %d \n", sum);
	return 0;
}
