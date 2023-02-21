#include "main.h"
/**
 * _isalpha - check discription
 * @c: checked character
 * Return: 1 if alpha or 0 if not alpha
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
