#include "main.h"
/**
 * reverse_array - function used to reverse array
 * @a: array to be reversed
 * @n: numbers to be reversed
 * Return: Nouting
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
