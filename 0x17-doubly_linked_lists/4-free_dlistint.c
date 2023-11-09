#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: the head of list
 * Return: NOthing
*/
void free_dlistint(dlistint_t *head)
{
while (head->next != NULL)
{
head = head->next;
free(head->prev);
}
free(head);
}
