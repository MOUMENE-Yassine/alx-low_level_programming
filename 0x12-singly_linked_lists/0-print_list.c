#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list
* @h: Pointer to the head node of the list
*
* Return: The number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		c++;
		h = h->next;
	}
	return (c);
}
