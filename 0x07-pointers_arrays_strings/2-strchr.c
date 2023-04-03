#include "main.h"
#include <stdio.h>

/**
* *_strchr - function that locates a character in a string.
* @s: the string.
* @c: the character.
* Return: pointer to the first occurrence.
*/
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;

	}
	if (c == '\0')
	{
		return (p);
	}
	return (NULL);
}
