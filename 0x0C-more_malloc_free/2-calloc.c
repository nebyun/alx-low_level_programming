#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: memory for the array.
 * @size: elements of size.
 * Return: if nmemb or size is 0 return NULL
 * if the malloc fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *pmem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pmem = malloc(nmemb * size);
	if (pmem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		pmem[i] = 0;
	return ((void *)pmem);
}
