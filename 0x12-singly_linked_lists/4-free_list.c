#include "lists.h"

/**
 * free_list - free lists_t memory allocation
 * @head: pointer to list_t
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
