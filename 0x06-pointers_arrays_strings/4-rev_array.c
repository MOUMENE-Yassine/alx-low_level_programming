#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers.
* @a: an array.
* @n: the number of elements of the array.
* Return: the result.
*/
void reverse_array(int *a, int n)
{
	int i, r;

	for (i = 0; i < n / 2; i++)
	{
		r = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = r;
	}
}
