#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * @head: the head of the list
 * @idx: the index
 * @n: the data of the new node
 * Return:  the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i, num = 0;
listint_t *new_node, *current = *head;
new_node = malloc(sizeof(listint_t));
if (*head == NULL)
{
if (idx != 0)
{
free(new_node);
return (NULL);
}
else
{
new_node->n = n;
new_node->next = NULL;
}}
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
num++;
}
if (idx - 1 == num)
{
new_node->n = n;
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
return (NULL);
}
