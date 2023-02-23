#include <stdio.h>
/**
 * main - Entry point
 * Description: print fibonacci numbers less than 4000000 starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1, f2, sum;
	float total;

	f1 = 0;
	f2 = 1;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if ((f2 % 2) == 0)
			total += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", total);
	return (0);
}
