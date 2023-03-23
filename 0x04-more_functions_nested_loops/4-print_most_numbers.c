#include "main.h"

/**
* print_most_numbers - print the numbers
*
* Return: the result
*/
void print_most_numbers(void)
{
	int p = 0;

	while (p < 10)
	{
		if (p != 2 && p != 4)
		{
			_putchar(p + '0');
		}
		p++;
	}
	_putchar('\n');
}
