#include "main.h"
#include <stdio.h>
/**
 * main - print the name of program
 * @argc: Number of argument
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Ignore argv */
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
