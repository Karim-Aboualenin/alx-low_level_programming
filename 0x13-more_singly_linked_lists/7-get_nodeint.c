#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t linked list.
 * @head: the head of the list
 * @index: the index
 *
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
unsigned int n = 0;
if (head == NULL)
return (NULL);
for (i = 0; i < index && head != NULL; i++)
{
head = head->next;
n++;
}
if (n == index)
return (head);
return (NULL);
}
