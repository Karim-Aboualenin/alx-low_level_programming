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
if (head == NULL)
exit(98);
while (head != NULL)
{
if (head->next != NULL)
difference = head - head->next;
printf("[%p] ", (void *)head);
printf("%d\n", head->n);
num++;
if (difference > 0)
{
head = head->next;
}
else
{
head = head->next;
printf("-> [%p] ", (void *)head);
printf("%d\n", head->n);
break;
}
}
return (num);
}
