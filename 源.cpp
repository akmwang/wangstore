#include<stdio.h>
int main(void)
{
	const double chu =9./5.;
	const double zhua = 32.;
	const double zkai = 273.16;
	double she;
	double hua, kai;

	printf("Please input the she temprature(no number to quit): ");
	while (scanf_s("%lf", &she) == 1)
	{
		hua = she * chu + zhua;
		kai = she + zkai;
		printf("%.2f in hua is %.2f, in kai is %.2f.\n", she, hua, kai);
		printf("Please input another she(no number to quit): ");
	}
	printf("Done.");

	return 0;
}