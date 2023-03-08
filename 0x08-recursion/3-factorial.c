#include "main.h"
/**
 * factorial - read discription
 * discription: function that returns factorial of a number
 * recursivelly
 * @n: intiger number
 * Return: factoria
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
