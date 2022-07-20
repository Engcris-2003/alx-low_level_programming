#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @index: is the index of the node, starting at 0
 * @head: the starting point
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);


}
