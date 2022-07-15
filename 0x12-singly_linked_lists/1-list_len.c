#include "lists.h"
/**
 * list_len - gives the length of a list
 * @h: linked list
 * Return: returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
