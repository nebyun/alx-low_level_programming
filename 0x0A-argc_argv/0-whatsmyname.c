#include "main.h"
#include <stdio.h>
/**
 * main - print the name of program
 * @argc: Number of argument
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
