#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *n, *p;
if (*head == NULL)
return (NULL);
n = NULL;
p = NULL;
while (*head != NULL)
{
n = (*head)->next;
(*head)->next = p;
p = *head;
*head = n;
}
*head = p;
return (*head);
}
