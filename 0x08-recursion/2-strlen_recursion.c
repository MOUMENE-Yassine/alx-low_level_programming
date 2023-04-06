#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s: string giving.
* Return: a string lenght.
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n = n + 1 + _strlen_recursion(s + 1);
	}
	return (n);
}
