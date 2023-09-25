#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *x;
	unsigned int y = 0;

	x = h;
	while (x)
	{
		y++;
		x = x->next;
	}
	return (y);
}
