#include "main.h"
#include <unistd.h>

/**
* print_numbers -  print the numbers
*
* Return: the result
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
