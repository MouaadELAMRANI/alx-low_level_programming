#ifndef LISTS_H_
#define LISTS_H_

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length
 * @next: next
 * Description: node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
