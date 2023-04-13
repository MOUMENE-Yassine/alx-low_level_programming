#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *string_nconcat - function that concatenates two strings.
* @s1: first string given.
* @s2: second string given.
* @n: nbr of characters to allocate.
* Return: the pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1 = 0, sz2 = 0, i = 0, j = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";
	while (s1[sz1] != '\0')
	{
		sz1++;
	}
	if (s2 == NULL)
		s2 = "";
	while (s2[sz2] != '\0')
	{
		sz2++;
	}
	if (n >= sz2)
		n = sz2;
	t = (char *)malloc((sz2 + n + 1) * sizeof(char));

	if (t == NULL)
		return (NULL);
	while (i < sz1)
	{
		t[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		t[i + j] = s2[j];
		j++;
	}
	t[i + j] = '\0';
	return (t);
}
