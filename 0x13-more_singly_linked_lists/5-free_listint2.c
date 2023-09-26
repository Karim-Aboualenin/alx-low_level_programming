#include "lists.h"

/**
 * free_listint2 -  a function that frees a list_t list.
* @head: the list
* Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *node;
if (head == NULL)
return;
while (*head != NULL)
{
node = (*head)->next;
free(*head);
*head = node;
}
*head = NULL;
}
