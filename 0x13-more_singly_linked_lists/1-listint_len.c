#include "lists.h"

/**
 * listint_len - prints the number of elements
 * in listint_t
 * @h: this points to the structure
 * Return: the number of elements in the structure
 */

size_t listint_len(const listint_t *h)
{
	unsigned int a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
