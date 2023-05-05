#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: binary string
* Return: value of convertion.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		k = k * 2 + (*b++ - '0');
	}
	return (k);
}
