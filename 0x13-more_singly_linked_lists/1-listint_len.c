#include "lists.h"
/**
 * listint_len - prints number of elements on the list
 * @h: the head for the linked list
 * Return: returns the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
