#include "lists.h"

/**
 * find_listint_loop -  a function that finds the loop in a linked list.
* @head: the list
* Return: The address of the node where the loop
* starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
int difference;
void *address;
while (head != NULL)
{
if (head->next != NULL)
difference = head - head->next;
head = head->next;
if (difference > 0)
{
}
else
{
address = (void *)head;
return (address);
break;
}
}
return (NULL);
}
