#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		nodes++;
	}

	return (nodes);
}
