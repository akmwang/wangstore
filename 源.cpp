#include<stdio.h>
int main(void)
{
	float length, width;

	printf("Please enter the length, ");
	printf("and enter q to quit: ");
	while (scanf_s("%f", &length) == 1)
	{
		printf("The length is %.2f.\n", length);
		printf("Please enter the width, ");
		printf("and enter q to quit: ");
		if (scanf_s("%f", &width) != 1)
			break;
		printf("The width is %.2f.\n", width);
		printf("The area is %.2f.\n", length * width);
		printf("Please enter the length, ");
		printf("and enter q to quit: ");
	}
	printf("Bye!\n");

	return 0;
}