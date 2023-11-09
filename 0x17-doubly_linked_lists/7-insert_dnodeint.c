#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements of a dlistint_t list.
 * @h: the head of list
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;
const dlistint_t *current = h;
while (current != NULL)
{
num++;
current = current->next;
}
return (num);
}

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position.
 * @h: the head of list
 * @idx: the position
 * @n: the new elemnt
 * Return: the address of the new node,
 * or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *before = *h, *after = *h;
size_t len = dlistint_len(*h);
size_t i;
if (idx >= len)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new = add_dnodeint(h, n);
return (new);
}
for (i = 0; i < idx; i++)
{
after = after->next;
}
before = after->prev;
new->next = after;
new->prev = before;
before->next = new;
after->prev = new;
return (new);
}
