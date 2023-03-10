#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: Number of argument
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
