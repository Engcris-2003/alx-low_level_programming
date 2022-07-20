#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: the starting point
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
