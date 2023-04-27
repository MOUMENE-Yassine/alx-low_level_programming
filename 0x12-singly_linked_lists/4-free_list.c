#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: Pointer to the list.
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
		temp = current;
	current = current->next;
	free(temp);
}
