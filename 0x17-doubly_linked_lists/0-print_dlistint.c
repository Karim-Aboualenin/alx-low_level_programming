#include "lists.h"
/**
 * print_dlistint - a function that prints all the
 * elements of a dlistint_t list.
 * @h: the head of list
 * Return: the number of nodes
 * 
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t num = 0;
const dlistint_t *current = h;
while (current != NULL)
{
printf("%d\n", current->n);
num++;
current = current->next;
}
return (num);
}
