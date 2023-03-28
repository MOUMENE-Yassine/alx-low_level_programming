#include "main.h"

/**
* puts2 - function that prints every other character of a string.
* @str: string given.
*Return: first character.
*/
void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	t = l - 1;
	for (x = 0; x <= t; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
