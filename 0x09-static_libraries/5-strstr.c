#include "main.h"
#include<stdio.h>

/**
* *_strstr - function that locates a substring.
* @haystack: the initail string.
* @needle: the substring.
* Return: pointer to the beginning of the located substring.
*/
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;

		while (*p2 != '\0' && *p1 == *p2)
		{
			++p1;
			++p2;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
		++haystack;
	}
	return (NULL);
}
