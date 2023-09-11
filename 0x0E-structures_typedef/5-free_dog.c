#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: the dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
free(d -> name);
free(d -> owner);
}
}
