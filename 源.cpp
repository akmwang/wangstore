#include<stdio.h>
int main(void)
{
	float sum = 100.;
	const float li = .08;
	int year = 0;

	while (sum > 0)
	{
		sum += sum * li-10;
		year++;
	}
	printf("%d", year);

	return 0;
}