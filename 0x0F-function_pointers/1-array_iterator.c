#include "function_pointers.h"
/**
 * array_iterator - a function that iterates through intiger
 * @array: array pointer
 * @size: size of array
 * @action: excuted function
 * Return: search index
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == 0 || action == 0)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
