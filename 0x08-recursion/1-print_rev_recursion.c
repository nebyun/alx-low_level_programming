#include "main.h"
/**
 * print_rev_recursion - read discription
 * discription: Recursive function that prints reverse string followed by newline
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
