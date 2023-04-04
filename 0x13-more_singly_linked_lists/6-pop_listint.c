#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: a pointer to the first component in the linked list
 *
 * Return: Date in the elements that was erased, or 0 if the list is empty
 */

nt pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
