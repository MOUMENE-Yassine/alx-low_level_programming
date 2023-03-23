#include "main.h"

/**
* more_numbers -  10 times print the numbers
*
* Return: the result
*/

void more_numbers(void)
{
	int i = 0, c;

	while (i <= 9)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
