#include <stdio.h>

int main() 
{
	int num = 0;
	int mult = 1;
	
	printf("Enter the number to see the multipilication table: ");
	scanf("%d", &num);

	for (int i = 1; i <= 10; ++i) {
		mult = i * num;
		printf("%d * %d = %d\n", num, i, mult);
	}

	printf("\n");
	return 0;
}
