#include "lists.h"

/**
 * free_listint_safe -  a function that frees a list_t list.
* @h: the list
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *node, *current;
int difference;
if (h == NULL)
return (0);
current = *h;
while (current != NULL)
{
difference = current - current->next;
size++;
if (difference > 0)
{
node = current->next;
free(current);
current = node;
}
else
{
free(current);
*h = NULL;
break;
}
}
*h = NULL;
return (size);
}
