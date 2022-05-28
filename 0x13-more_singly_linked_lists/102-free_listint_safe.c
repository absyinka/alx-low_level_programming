#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: points to a linked list
 * Return: the size on success, 0 on failure
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	unsigned int size;
	int j;

	if (!*h)
		return (0);

	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
