#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the head of the list
 *
*/


void free_list(list_t *head)
{
list_t *cure;

if (!head)
return;

cure = head;
while (cure != NULL)
{
list_t *next = cure->next;
if (cure->str)
free(cure->str);
free(cure);
cure = next;
}
}
