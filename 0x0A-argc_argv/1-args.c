#include "main.h"
#include <stdio.h>
/**
* main - program that prints the number of arguments passed into it.
* @argc: size
* @argv: array list
* Return: always 0 (succes)
*/
int main(int argc, char  *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
