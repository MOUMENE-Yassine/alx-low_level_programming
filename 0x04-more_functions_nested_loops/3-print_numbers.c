#include "main.h"
#include <unistd.h>

/**
* print_numbers -  print the numbers
*
* Return: the result
*/

void print_numbers(void)
{
	int p = 0;

	while (p < 10)
	{
		_putchar(p + '0');
		p++;
	}
	_putchar('\n');
}
