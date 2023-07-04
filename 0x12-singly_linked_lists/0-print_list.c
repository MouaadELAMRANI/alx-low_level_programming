#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints list
 * @h: list
 * Return: number
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
