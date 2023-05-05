#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need to flip.
* @n: number one
* @m: number two
*
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned int nbr = 0;

	while (i < 64)
	{
		nbr = nbr + ((n & 1) ^ (m & 1));
		n >>= 1;
		m >>= 1;
		i++;
	}
	return (nbr);
}
