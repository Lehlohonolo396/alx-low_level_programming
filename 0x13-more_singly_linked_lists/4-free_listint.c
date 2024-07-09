#include "lists.h"

/**
 * free_listint -  function that frees a listint_t list.
 * @head: pointer to 1st node of the linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
