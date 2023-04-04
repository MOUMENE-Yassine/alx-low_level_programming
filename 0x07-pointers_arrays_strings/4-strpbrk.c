#include "main.h"
#include<stdio.h>

/**
* *_strpbrk - function that searches a string for any of a set of bytes.
* @s: the initial segment.
* @accept: the bytes giving.
* Return: pointer to the byte in s.
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; ++p)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		++s;
	}
	return (NULL);
}
