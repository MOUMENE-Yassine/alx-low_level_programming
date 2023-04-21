#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function that prints strings.
* @separator: the string to be printed.
* @n: number of strings.
* Return: the strings.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i < n)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
