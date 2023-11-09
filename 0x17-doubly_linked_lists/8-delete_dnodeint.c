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
 * delete_dnodeint_at_index - a function that deletes the node at
 * index of a dlistint_t linked list.
 * @head: the head of list
 * @index: the position
 * Return: 1 if succedded
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head, *temp, *tail = *head;
size_t len = dlistint_len(*head);
size_t i;
if (head == NULL || *head == NULL)
return (0);
if (index == 0)
{
if (((*head)->next ==NULL) && index == 0)
{
*head = NULL;
return(1);
}
(*head)->next->prev = NULL;
temp = (*head)->next;
free(*head);
*head = temp; 
return (1);
}
if (index > len)
return (0);
while(tail->next != NULL)
tail = tail->next;
if (index == len)
{
tail->prev->next = NULL;
temp = tail->prev;
free(tail);
tail = temp;
}
for (i = 0; i < index; i++)
{
current = current->next;
}
current->prev->next = current->next;
current->next->prev = current->prev;
free(current);
return (1);
}
