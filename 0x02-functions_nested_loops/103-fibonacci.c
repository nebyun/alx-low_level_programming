#include <stdio.h>
/**
 * main - Entry point
 * Description: print fibonacci numbers less than 4000000 starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long f1 = 1, f2 = 2, sum = f2;

	while (f2 + f1 < 4000000)
	{
		f2 += f1;

		if (f2 % 2 == 0)
			sum += f2;

		f1 = f2 - f1;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
