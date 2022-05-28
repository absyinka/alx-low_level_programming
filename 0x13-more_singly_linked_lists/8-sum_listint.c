#include "lists.h"

/**
 * sum_listint - sums all nodes
 * @head: this points to linked list
 * Return: the total sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int i, add = 0;

	for (i = 0; temp; i++)
	{
		if (head == 0)
			return (0);
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
