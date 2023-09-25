#include "lists.h"

/**
 * _strlen - return the length of string
 * @s: the string
 * Return: the length of the string
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
* add_nodeint_end -  a function that adds a new node at the
* end of a list_t list
* @head: the list
* @n: the data in new node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tail;
listint_t *Newnode;
int element;
element = n;
tail = *head;
if (*head != NULL)
{
while (tail->next != NULL)
tail = tail->next;
}
Newnode = malloc(sizeof(listint_t));
if (Newnode == NULL)
return (NULL);
Newnode->n = element;
Newnode->next = NULL;
if (*head == NULL)
*head = Newnode;
else
tail->next = Newnode;
return (Newnode);
}
