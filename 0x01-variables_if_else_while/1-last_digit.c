#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	if (l > 5)
	{
		printf("Last digit of '&n' is %d and is greater than 5\n", l);
	}
	else if (l == 0)
	{
		printf("Last digit of '&n' is %d and is 0\n", l);
	}
	else
	{
		printf("Last digit of '&n' is %d and is less than 6 and not 0\n", l);
	}
	return (0);
}

