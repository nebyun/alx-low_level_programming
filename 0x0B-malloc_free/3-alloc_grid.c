#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2dim array of intigers.
 * @width: width of the array
 * @height: height of the array
 * Return: Two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * height);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >=  0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
