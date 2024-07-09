#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a listint_t linked list.
 * @head: pointer to first node in linked list
 * @index: index of the node to return
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
