#include "main.h"

/**
* _puts_recursion - function that prints a string.
* @s: string giving.
* Return: a string.
*/
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
