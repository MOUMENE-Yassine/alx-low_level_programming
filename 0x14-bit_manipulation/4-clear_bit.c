#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number to modifiy
 * @index: index of number
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;
	unsigned int j = 0;

	if (index > 63)
		return (-1);
	k = 1;
	while (j < index)
	{
		k = k * 2;
		j++;
	}
	if ((*n >> index) & 1)
		*n = *n - k;
	return (1);
}
