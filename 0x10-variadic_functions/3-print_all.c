#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* format_char - format character.
* @separator: separator strings.
* @ap: argument pointer.
*/
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
* format_int - format integer.
* @separator: separator strings.
* @ap: argument pointer.
*/
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
* format_float - format float.
* @separator: separator strings.
* @ap: argument pointer.
*/
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
* format_string - format string.
* @separator: separator strings.
* @ap: argument pointer.
*/
void format_string(char *separator, va_list ap)
{
	char *s = va_arg(ap, char*);

	switch ((int)(!s))
	case 1:
		s = "(nil)";
		printf("%s%s", separator, s);
}

/**
* print_all - function that prints anything.
* @format: format of strings.
* Return: anything.
*/
/
 typedef struct array {
    char *array;
    void (*f)(char *, va_list);
} array_t;

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;

	int array_t arrays[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (arrays[j].array)
		{
			if (format[i] == arrays[j].array[0])
			{
				arrays[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
