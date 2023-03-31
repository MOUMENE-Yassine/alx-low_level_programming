#include "main.h"

/**
* *string_toupper - function that changes all lowercase letters.
* @str: the string to be changed.
* Return: the result.
*/
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] >= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
