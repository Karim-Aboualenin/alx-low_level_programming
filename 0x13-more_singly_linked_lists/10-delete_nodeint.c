#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: the head of the list
 * @index: the index
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i, num = 0;
listint_t *current, *deleted;
if (*head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}

for (i = 0; i < index - 1 && current != NULL; i++)
{
num++;
current = current->next;
}
if (index - 1 == num)
{
deleted = current->next;
current->next = current->next->next;
free (deleted);
return (1);
}
return (-1);
}
