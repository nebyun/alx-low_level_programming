#include "main.h"
/**
 * _pow_recursion - read discription
 * discription: function that returns the value x the
 * the power of y
 * @x: intiger number
 * @y: intiger number
 * Return: x the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y != 0)
	{
		x = x * _pow_recursion(x, --y);
	}
	return (x);
}
