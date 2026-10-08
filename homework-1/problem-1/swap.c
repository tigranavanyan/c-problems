#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("Enter two number \n");
	scanf("%d %d", &num1, &num2);
	printf("num1 = %d and num2 = %d \n", num1, num2);

	int tmp = 0;
	tmp = num1;
	num1 = num2;
	num2 = tmp;

	printf("num1 = %d and num2 = %d \n", num1, num2);

}
