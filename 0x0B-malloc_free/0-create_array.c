#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - function that creates an array of chars.
* @size: array size.
* @c: character giving.
* Return: NULL if size = 0.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *) malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
