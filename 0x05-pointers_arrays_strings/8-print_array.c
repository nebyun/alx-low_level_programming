#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a : array pointer
 * @no : number of elements of the array to be printed
 * Return: Nouting
 */
void print_array(int *a, int no)
{
	int i;

	for (i = 0 ; i < no ; i++)
	{
		printf("%d", a[i]);
		if (i != (no - 1))
			printf(", ");
	}
	printf("\n");
}
