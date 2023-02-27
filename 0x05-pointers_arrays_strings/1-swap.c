#include "main.h"
/**
 * swap_int - swaps the intiger
 * @a : points to the swaped value
 * @b : points to the value after swap
 * Return: Nouting
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
