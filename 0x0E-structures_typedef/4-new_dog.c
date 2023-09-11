#include "dog.h"

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
 * _strcpy - copies a string to another string
 * @dest: the destination
 * @src: the source
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int len, i;
len = _strlen(src);
for (i = 0; i <= len; i++)
{
*dest = *src;
dest++;
src++;
}
for (i = 0; i <= len; i++)
{
dest--;
}
return (dest);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *nmae,*onwer;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
nmae = malloc(_strlen(name) * sizeof(char));
if (nmae == NULL)
{
free(dog);
return (NULL);
}
onwer = malloc(_strlen(owner) * sizeof(char));
if (onwer == NULL)
{
free(dog);
return (NULL);
}
_strcpy(nmae, name);
_strcpy(onwer, owner);
dog->name = nmae;
dog->age = age;
dog->owner = onwer;
return (dog);
}
