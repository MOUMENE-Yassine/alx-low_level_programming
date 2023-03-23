#include "main.h"

/**
* print_most_numbers - print the numbers
*
* Return: the result
*/
void print_most_numbers(void)
{
	int x = 0;

	for (i = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
