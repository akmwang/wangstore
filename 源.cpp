#include<stdio.h>
int main(void)
{
	const int add = 10;
	int num;

	printf("Please input an integer:\n");
	scanf_s("%d", &num);
	for (int i = num; i <= num + add; i++)
		printf("%d ", i);

	return 0;
}