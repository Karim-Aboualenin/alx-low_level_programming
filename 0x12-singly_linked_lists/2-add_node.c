#include "lists.h"

/**
* add_node -  a function that adds a new node at the
* beginning of a list_t list
* @h: the list
* @str: the data in new node
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
int len;
char *element;
element = strdup(str);
*head = malloc(sizeof(list_t));
if (*head == NULL)
return NULL;
(*head)->str = element;
len = _strlen(element);
(*head)->len = len;
(*head)->next = NULL;
return (*head);
}
