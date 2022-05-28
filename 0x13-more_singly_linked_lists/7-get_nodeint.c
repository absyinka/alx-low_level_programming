#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a linked list
 * @head: pointer to the structure
 * @index: the position of the particular node
 * Return: the nth node, and if the node does not exit, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;

	if (temp == NULL)
		return (NULL);

	for (count = 0; count < index && temp != NULL; count++)
	{
		temp = temp->next;
	}
	return (temp);
}
