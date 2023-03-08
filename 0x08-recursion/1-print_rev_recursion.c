#include "main.h"
/**
 * _print_rev_recursion - read discription
 * discription: recursive function that prints reverse
 * string followed by newline
 * @s: charactor pointer
 * Return: Nouting
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
