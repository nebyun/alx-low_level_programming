#include <stdio.h>
/**
 * main - Entry point
 * Description: print fibonacci numbers up to 98 starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long f1, f2;
	long double sum;

	f1 = 1;
	f2 = 2;

	for (i = 0 ; i < 98 ; i++)
	{
		if (i == 0)
		{
			printf("%ld", f1);
			printf(", ");
		}
		else if (i == 1)
		{
			printf("%ld", f2);
			printf(", ");
		}
		else
		{
			sum = f1 + f2;
			printf("%.Lf", sum);
			f1 = f2;
			f2 = sum;
			if (i == 97)
				printf("\n");
			else
				printf(", ");
		}
	}
	return (0);
}
