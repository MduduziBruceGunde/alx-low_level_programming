#include "lists.h"

/**
* add_nodeint_end - Adds a node at the end of a linked list
* @head: pointer to the first element in the list
* @n: data to insert in the new component
*
* Return: pointer to the new node, or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp_node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;

return (new_node);
}

temp_node = *head;

while (temp_node->next != NULL)
temp_node = temp_node->next;

temp_node->next = new_node;

return (new_node);
}
