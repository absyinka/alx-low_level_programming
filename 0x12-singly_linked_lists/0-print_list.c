
#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: points to the list_t
 * Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int a = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
