#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: The structure
 * Return: nothing
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("age: %f\n", d->age);
if (d->owner == NULL)
printf("owner: (nil)\n");
else
printf("owner: %s\n", d->owner);
}
}
