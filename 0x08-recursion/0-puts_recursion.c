#include "main.h"
/**
 * _puts_recursion - read discription
 * discription: Recursive function that prints string followed by newline
 * @s: charactor pointer
 * Return: Nouting
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
