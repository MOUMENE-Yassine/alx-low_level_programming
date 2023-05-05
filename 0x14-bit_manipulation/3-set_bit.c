#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number to modifiy
 * @index: index of number
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;
	unsigned int j = 0;

	if (index > 63 || (*n >> index) & 1)
		return (-1);
	k = 1;
	while (j < index)
	{
		k *= 2;
		j++;
	}
	*n = *n + k;
	return (1);
}
