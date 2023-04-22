#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* format_char - format character.
* @ap: argument pointer.
*/
void format_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
* format_int - format integer.
* @ap: argument pointer.
*/
void format_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
* format_float - format float.
* @ap: argument pointer.
*/
void format_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
* format_string - format string.
* @ap: argument pointer.
*/
void format_string(va_list ap)
{
	char *s = va_arg(ap, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}

/**
* print_all - function that prints anything.
* @format: format of strings.
* Return: anything.
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;

	array_t arrays[] = {
		{'c', format_char},
		{'i', format_int},
		{'f', format_float},
		{'s', format_string},
		{'\0', NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (arrays[j].letter != '\0')
		{
			if (format[i] == arrays[j].letter)
			{
				printf("%s", separator);
				arrays[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
