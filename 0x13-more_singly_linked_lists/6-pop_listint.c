#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to first node of linked list
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
