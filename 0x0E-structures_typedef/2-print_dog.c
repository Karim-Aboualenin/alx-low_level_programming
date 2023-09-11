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
printf("Name: (nil)");
else
printf("Name: %s", d->name);
if (d->age == 0)
printf("age: (nil)");
else
printf("age: %d", d->age);
if (d->owner == NULL)
printf("owner: (nil)");
else
printf("owner: %s", d->owner);
}
}
