#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: head of the linked list
 * @n: interger
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint *new;

	new = malloc(sizeof(listint));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
