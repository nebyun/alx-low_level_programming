#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * returns pointer to allocated memory
 * need status value to be 98
 * @b: intiger value
 * Return: Empty.
 */
void *malloc_checked(unsigned int b)
{
	void *pmemory;

	pmemory = malloc(b);
	if (pmemory == NULL)
		exit(98);
	return (pmemory);
}
