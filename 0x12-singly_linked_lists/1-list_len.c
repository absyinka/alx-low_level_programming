#include "lists.h"
#include <stdlib.h>

/**
 * list_len - produces the number of elements in list_t
 * @h: points to the list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int a;

	for (a = 0; h; a++)
		h = h->next;
	return (a);
}
