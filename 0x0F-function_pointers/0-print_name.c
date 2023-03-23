#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: a name pointer
 * @f: a function that prints name
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
