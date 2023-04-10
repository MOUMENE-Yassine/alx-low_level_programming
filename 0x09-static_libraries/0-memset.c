#include "main.h"

/**
* *_memset - function that fills memory with a constant byte.
* @s: the block giving.
* @b: the constant byte.
* @n: size of the block.
* Return: pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
