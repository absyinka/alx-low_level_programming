#include "lists.h"

/**
 * print_listint_safe - prints all elements of linked list safely
 * @head: points to the linked list
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;
	long int num;

	if (!head->next)
		exit(98);

	while (head)
	{
		num = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (num > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
