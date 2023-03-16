#include "main.h"
/**
 * array_range -  a function that creates an array of integers
 * @min: Minimum value of the array
 * @max: Maximum value of the array
 * Return: pointer of newley created array
 * and if min > max return NULL
 * if Malloc fails return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);
}
