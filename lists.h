#ifndef LIST_H_
#define LIST_H_
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * struct list_s - singly linked lists
 * @str: string
 * @len: length of string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif
