#include "main.h"

/**
* *_memcpy - function that copies memory area.
* @dest: memory area destination.
* @src: memory area source.
* @n: nbr of the bytes.
* Return: pointer dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p1 = dest;
	char *p2 = src;

	while (n--)
	{
		*p1++ = *p2++;
	}
	return (dest);
}
