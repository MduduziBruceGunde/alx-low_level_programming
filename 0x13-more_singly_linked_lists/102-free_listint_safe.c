#include "lists.h"

/**
* free_listint_safe - frees a linked list
* @h: pointer to the first node in the linked list 
*
* Return: number of elements in the free list
*/

size_t free_listint_safe(listint_t **h)
{
size_t len = 0;

listint_t *current, *temp;

if (!h || !*h)
return (0);

while (*h != NULL)
{
len++;
if (*h <= (*h)->next)
{
current = *h;

*h = (*h)->next;

free(current);
}
else
{
current = *h;

temp = (*h)->next;

*h = temp;

free(current);
break;
}
}
*h = NULL;
return (len);
}


