#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * dlistint_t linked list.
 * @head: the head of list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
size_t len;
size_t i;
dlistint_t *current = head;
len = dlistint_len(head);
if (index >= len)
return (NULL);
for(i = 0; i < index; i++)
{
current = current->next;
}
return (current);
}
