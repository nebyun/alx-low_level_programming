#include <stdio.h>

/**
 * Main start
 *
 * Return 0
 */
int main(void)
{
/*Declare data types*/
	int intType;
	float floatType;
	double doubleType;
	char charType;
/*for printing output*/
	printf("Size of int: %i bytes\t", sizeof(intType));
	printf("Size of float: %f bytes\t", sizeof(floatType));
	printf("Size of double: %g bytes\t", sizeof(doubleType));
	printf("Size of char: %c bytes\t", sizeof(charType));
	return (0);
}
