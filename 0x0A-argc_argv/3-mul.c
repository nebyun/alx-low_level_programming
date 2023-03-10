#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Number of argument
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int val_1, val_2, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	val_1 = atoi(argv[1]);
	val_2 = atoi(argv[2]);
	mul = val_1 * val_2;
	printf("%d\n", mul);
	return (0);
}
