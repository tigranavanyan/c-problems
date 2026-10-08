#include <stdio.h>

int main() 
{
	char* arr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int i = 0;

	while (i != 7){
		printf("%-10s", arr[i]);
		i++;
	}
	printf("\n");

	for (int i = 1; i <= 31; ++i){
		printf("%-10d", i);
		if (i % 7 == 0) {
			printf("\n");
		}
	}

	printf("\n");
	return 0;
}
