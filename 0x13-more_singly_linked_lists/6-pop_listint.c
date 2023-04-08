#include "lists.h"
/**
 * pop_listint - Pops the head node of list.
 * @head: A pointer to the address of the head.
 * Return: If the linked list is empty - return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);
	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (ret);
}

