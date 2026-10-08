#include <stdio.h>

int main() 
{
	int num = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	for (int i = 2; i <= num; ++i) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}
