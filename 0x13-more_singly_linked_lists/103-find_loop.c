#include "lists.h"

/**
 * find_listint_loop - find the loop the in an linked list
 * @head: this point to the linked list
 * Return: just return
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *single_pace, *double_pace;

	single_pace = head;
	double_pace = head;

	if (!head)
		return (NULL);

	while (single_pace && double_pace && double_pace->next)
	{
		single_pace = single_pace->next;
		double_pace = double_pace->next->next;
		if (single_pace == double_pace)
		{
			single_pace = head;
			while (double_pace != single_pace)
			{
				single_pace = single_pace->next;
				double_pace = double_pace->next;
			}
			return (double_pace);
		}
	}
	return (NULL);
}
