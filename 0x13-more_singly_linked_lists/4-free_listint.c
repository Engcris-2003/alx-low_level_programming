#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the head of the linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
