#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at nth position
 * @head: points to the linked list
 * @index: the position of the deleted node
 * Return: 1 is success, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextN;
	unsigned int i = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		nextN = (*head)->next;
		free(*head);
		*head = nextN;
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
		i++;
	}
	nextN = temp->next;
	temp->next = nextN->next;
	free(nextN);
	return (1);
}
