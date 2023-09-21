#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
* @head: the list
* Return: the number of nodes
*/
void free_list(list_t *head)
{
while (head != NULL)
{
if (head = NULL)
return;
free(head->str);
head->next = NULL;
}
}