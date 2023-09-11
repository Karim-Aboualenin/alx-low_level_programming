#include "dog.h"
/**
 * init_dog - a function that initialize a variable of 
 * type struct dog
 * @d: The structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}