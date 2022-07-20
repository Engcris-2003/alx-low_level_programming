#ifndef LISTS_H_
#define LISTS_H_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listint_p - singly linked list
 * @p: pointer to the nodes
 * @next: points to the next node
 */
typedef struct listint_p
{
	void *p;
	struct listint_p *next;
} listint_p;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
#endif
