#include "main.h"

/**
* is_prime_number - function that returns 1 if is a prime number.
* @n: number given.
* @r: primary to find.
* Return: the results.
*/

int primary(int n, int r);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primary(n, 2));
}

/**
* primary - function that find the square root.
* @n: number given.
* @r: primary to find.
* Return: the results.
*/

int primary(int n, int r)
{
	if (r * r > n)
	{
		return (1);
	}
	else if (n % r == 0)
	{
		return (0);
	}
	else
		return (primary(n, r + 1));
}
