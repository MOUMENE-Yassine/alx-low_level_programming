#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - program that adds positive numbers.
* @argc: size
* @argv: array list
* Return: always 0 (succes)
*/
int main(int argc, char  *argv[])
{
	int i = 1;
	unsigned int x = 0, sum = 0;
	char *y;

	if (argc > 1)
	{
		while (i < argc)
		{
			y = argv[i];
			while (x < strlen(y))
			{
				if (y[x] < '0' || y[x] > '9')
				{
					printf("Error\n");
					return (1);
				}
				x++;
			}
			sum = sum + atoi(y);
			y++;
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
