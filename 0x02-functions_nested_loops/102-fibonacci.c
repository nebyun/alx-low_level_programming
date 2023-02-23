#include <stdio.h>
/**
 * main : Entry point
 * Description: display fibonachi upto 50
 * Return: to 0 (success)
 */
int main(void)
{
	int i;
	unsigned long f1, f2, sum;

	f1 = 1;
	f2 = 2;

	for (i = 1 ; i < 50 ; i++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (i != 49)
		{
		printf(", ");
		}
		printf("\n");
	}
}
