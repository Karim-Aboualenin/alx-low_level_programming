#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
* @head: the list
* Return: the number of nodes
*/
void free_list(list_t *head)
{
list_t *node;
if (head == NULL)
return;
while (head != NULL)
{
node = head->next;
free(head->str);
free(head);
head = node;
}
}
