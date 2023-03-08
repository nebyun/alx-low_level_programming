#include "main.h"
/**
 * is_prime_number - read discription
 * discription - function that returns prime numbers
 * @n: intiger number
 * Return: prime numbers
 */
int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (primeornot(n, i));
}
/**
 * primeornot - read discription
 * discription - check and returns prime numbers
 * @n: intiger number
 * @i: intiger number
 * Return: checked number
 */
int primeornot(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (primeornot(n, i - 1));
}
