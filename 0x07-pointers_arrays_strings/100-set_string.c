#include "main.h"
#include <stdio.h>
/**
 * set_string - function that sets the value of a pointer to string
 * @s: character that points to an address of address
 * @to: pointer to an address
 * Return: Nouting.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
