#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		s++;
		h = h->next;
	}
	return (s);
}
