#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list.
 * @head: the head of list
 * @n: the new elemnt
 * Return: the address of the new element,
 * or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tail = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (*head == NULL)
{
new->next = NULL;
new->prev = NULL;
*head = new;
return (new);
}
while (tail->next != NULL)
{
tail = tail->next;
}
new->next = NULL;
new->prev = tail;
tail->next = new;
return (new);
}
