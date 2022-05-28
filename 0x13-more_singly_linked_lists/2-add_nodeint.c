#include "lists.h"

/**
 * add_nodeint - adds a new node to the singly list
 * @head: this points to the structure
 * @n: integer
 * Return: NULL if failure, else head pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
