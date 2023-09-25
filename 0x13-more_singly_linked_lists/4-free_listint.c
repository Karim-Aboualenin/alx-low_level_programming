#include "lists.h"

/**
 * free_listint -  a function that frees a list_t list.
* @head: the list
* Return: the number of nodes
*/
void free_listint(listint_t *head)
{
listint_t *node;
if (head == NULL)
return;
while (head != NULL)
{
node = head->next;
free(head);
head = node;
}
}
