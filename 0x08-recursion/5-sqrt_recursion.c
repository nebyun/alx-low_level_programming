#include "main.h"
/**
 * _sqrt_recursion - read discription
 * discription - function that returns the natural square
 * root of a number.
 * @n: intiger number.
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - read discription
 * discription: function that computes the square root
 * @n: intiger number
 * @x: intiger number
 * Return: n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
}
