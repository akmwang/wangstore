#include<stdio.h>
#define T1 .15
#define T2 .2
#define T3 .25
void menu(void);
int main(void)
{
	float pre,time, sum, tax, pur;
	int num;

	while (1)
	{
		menu();
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			pre = 800;
			break;
		case 2:
			pre = 1000;
			break;
		case 3:
			pre = 1200;
			break;
		case 4:
			pre = 1500;
			break;
		case 5:
			pre = 300;
			break;
		default:
			printf("Wrong! Please enter 1-5!\n");
			continue;
		}
		break;
	}
	printf("Please input the time: ");
	scanf_s("%f", &time);

	if (time <= 40)
		sum = 1000;
	else
		sum = pre + 1.5 * time;

	if (sum <= 300)
		tax = sum * T1;
	else if (sum > 300 && sum <= 450)
		tax = 300 * T1 + (sum - 300) * T2;
	else
		tax = 300 * T1 + 150 * T2 + (sum - 450) * T3;

	pur = sum - tax;

	printf("The sum is %.2f, ", sum);
	printf("tax is %.2f, ", tax);
	printf("pur is %.2f.\n", pur);

	return 0;
}void menu(void)
{
	printf("***************************************************\n");
	printf("Enter the number of the desired pay rate or action:\n");
	printf("1)800\t2)1000\n3)1200\t4)1500\n5)quit\n");
	printf("***************************************************\n");
}