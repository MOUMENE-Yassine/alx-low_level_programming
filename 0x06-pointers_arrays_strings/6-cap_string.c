#include "main.h"

/**
* *cap_string - function that capitalizes all words of a string.
* @str: string giving
* Return: the result.
*/
char *cap_string(char *str)
{
	int index = 0;
	int test = 0;

	while (str[index] != '\0')
	{
		if (test == 1 && str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}

		if (str[index] == ' ' || str[index] == ',' ||
				str[index] == ';' || str[index] == '.' ||
				str[index] == '!' || str[index] == '?' ||
				str[index] == '"' || str[index] == '(' ||
				str[index] == ')' || str[index] == '{' ||
				str[index] == '}' || str[index] == 9 || str[index] == 10)
		{
			test = 1;
		}
		else
			test = 0;
		index++;
	}
	return (str);
}
