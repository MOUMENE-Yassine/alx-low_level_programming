#include "main.h"

/**
* print_numbers -  print the numbers
*
* Return: the result
*/

void print_numbers(void)
{
	int y = 0;

	while (y < 10)
	{
		_putchar(y + '0');
		y++;
	}
	_putchar('\n');
}
