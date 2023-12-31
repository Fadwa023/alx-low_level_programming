#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nd;
	listint_t *tem = *head;

	nd = malloc(sizeof(listint_t));
	if (!nd || !head)
		return (NULL);

	nd->n = n;
	nd->next = NULL;

	if (idx == 0)
	{
		nd->next = *head;
		*head = nd;
		return (nd);
	}

	for (x = 0; tem && x < idx; x++)
	{
		if (x == idx - 1)
		{
			nd->next = tem->next;
			tem->next = nd;
			return (nd);
		}
		else
			tem = tem->next;
	}

	return (NULL);
}
