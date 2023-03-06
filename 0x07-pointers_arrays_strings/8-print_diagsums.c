#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals.
 * @a: a square matrix of integers
 * @size: an size of matrix
 * Return: Nouting.
 */
void print_diagsums(int *a, int size)
{
	int i, max;
	int sum1 = 0, sum2 = 0;

	max = size * size;
	for (; i < max ; i += size + 1)
		sum1 += a[i];
	for (i = size - 1 ; i < max - 1 ; i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
