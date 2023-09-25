#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *x, *x2;

	x = head;
	while (x != NULL)
	{
		x2 = x->next;
		free(x);
		x = x2;
	}
}
