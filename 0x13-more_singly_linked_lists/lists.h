#ifndef LISTS_H_
#define LISTS_H_

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: int
 * @next: pointer
 * Description: singly linked list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
