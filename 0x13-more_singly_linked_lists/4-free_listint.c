#include "lists.h"

/**
 * free_listint - free listint_t memory allocation
 * @head: pointer to listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
