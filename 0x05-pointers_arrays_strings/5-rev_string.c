#include "main.h"

/**
* rev_string - function that reverses a string.
* @s: string given.
*Return: reverse string.
*/
void rev_string(char *s)
{
	char r = s[0];
	int l = 0;
	int i;

	while (s[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		l--;
		r = s[i];
		s[i] = s[l];
		s[l] = r;
	}
}
