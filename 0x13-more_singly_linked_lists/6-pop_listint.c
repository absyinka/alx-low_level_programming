#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the nodes data
 * @head: pointer to the linked list
 * Return: return head node data on success, else 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
