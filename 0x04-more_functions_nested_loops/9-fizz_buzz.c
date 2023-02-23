#include <stdio.h>
/**
 * main - Entry point
 * Discription : print Fizz x3, Buzz x5, FizzBuzz x53
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else
			printf("%d", i);
	if (i == 100)
		continue;
	printf(" ");
	}
	printf("\n");
	return (0);
}
