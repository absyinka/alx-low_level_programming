#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: points to the linked list
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *temp, *nextN;

	prev = 0;

	temp = nextN = *head;

	while (nextN != 0)
	{
		nextN = nextN->next;
		temp->next = prev;
		prev = temp;
		temp = nextN;
	}
	*head = prev;
	return (*head);
}
