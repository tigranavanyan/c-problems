#include <stdio.h>

int main() 
{
	int num = 1;
	int sum = 0;

	while (num != 0){
		printf("Enter the numbers: ");
		scanf("%d", &num);
		sum += num;
	}

	printf("Sum -> %d\n", sum);
	return 0;
}
