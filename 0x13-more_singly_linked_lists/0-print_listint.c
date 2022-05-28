#include "lists.h"

/**
 * print_listint - print all elements in listint_t
 * @h: this points to the structure
 *
 * Return: the number of elements in the structure
 */

size_t print_listint(const listint_t *h)
{
	unsigned int a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
