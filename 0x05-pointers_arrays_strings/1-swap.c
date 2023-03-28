#include "main.h"

/**
* swap_int - function that swaps the values of two integers.
* @a: value given
* @b: value given
*Return: the result
*/
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
