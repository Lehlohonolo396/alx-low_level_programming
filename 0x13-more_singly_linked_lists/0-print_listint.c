#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the 1st node of the linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodenum++;
		h = h->next;
	}

	return (nodenum);
}
