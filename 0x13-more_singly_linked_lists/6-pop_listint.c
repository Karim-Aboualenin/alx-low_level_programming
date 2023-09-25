#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a listint_t linked
 *  list, and returns the head node’s data (n).
 * @head: the head of the list
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
int element;
listint_t *node;
node = *head;
element = (*head)->n;
*head = (*head)->next;
free (node);
return (element);
}
