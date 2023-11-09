#include "lists.h"
/**
 * print_dlistint - a function that returns the number of
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
