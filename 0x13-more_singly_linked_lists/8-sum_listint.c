#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data linked list.
* @head: pointer header list
*
* Return: the sum of all the data list.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
