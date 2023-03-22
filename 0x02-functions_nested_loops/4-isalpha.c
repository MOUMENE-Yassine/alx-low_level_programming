#include "main.h"

/**
* _isalpha - check lowercases or uppercase lettres.
*
* @c: character to be checked
*
* Return: 1 for lowercase or uppercase or 0 for otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
