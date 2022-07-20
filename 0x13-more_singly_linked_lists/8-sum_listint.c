#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: starting point
 * Return: returns the sum of all the data (n)  or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum +=head->n;
		head = head->next;
	}
	return (sum);
}
