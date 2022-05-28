#include "lists.h"

/**
 * listint_t *insert_nodeint_at_index - inserts node at nth position
 * @head: points to linked list
 * @idx: the position to fix the node
 * @n: the data
 * Return: the newNode on success, else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int i = 0;


	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		while (i < idx - 1 && temp)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
