#include "main.h"

/**
* *cap_string - function that capitalizes all words of a string.
* @s: string giving
* Return: the result.
*/
char *cap_string(char *s)
{
	int i = 0;
	int c = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
				s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
				s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			c = 1;
		}
		else
		{
			if (c == 1)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
				c = 0;
			}
		}
		i++;
	}
	return (s);
}
