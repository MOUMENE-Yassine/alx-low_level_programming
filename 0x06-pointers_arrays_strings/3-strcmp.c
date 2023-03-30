#include "main.h"

/**
* *_strcmp - function that compares two strings.
* @s1: string 1.
* @s2: string 2.
* Return: the result.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		s2++;
	}
	if (s1 != s2)
	{
		return (s1 - s2);
	}
	return (0);
}
