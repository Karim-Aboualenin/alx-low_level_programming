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
* add_nodeint -  a function that adds a new node at the
* beginning of a list_t list
* @head: the list
* @n: the data in new node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *Newnode;
int element;
element = n;
Newnode = malloc(sizeof(listint_t));
if (Newnode == NULL)
return (NULL);
Newnode->n = n;
Newnode->next = *head;
*head = Newnode;
return (Newnode);
}
