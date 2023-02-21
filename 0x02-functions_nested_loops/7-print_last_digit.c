#include "main.h"
/**
 * print_last_digit - check
 * @r: intiger number
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int no;

	if (r < 0)
	{
		no = -1 * (r % 10);
		return (no);
	}
	else
	{
		no = r % 10;
		return (no);
	}
	return (no);
}
