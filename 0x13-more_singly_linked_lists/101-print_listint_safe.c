#include "lists.h"

/**
 * print_listint_safe -  function that prints all the elements
 * of a listint_t list.
* @head: the list
* Return: the number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
int difference;
size_t num = 0;
const listint_t *current = head;
while (current != NULL)
{
if (current->next != NULL)
difference = current - current->next;
printf("[%p] ", (void *)current);
printf("%d\n", current->n);
num++;
current = current->next;
if (difference > 0)
{
}
else
{
printf("-> [%p] ", (void *)current);
printf("%d\n", current->n);
break;
}
}
return (num);
}
