#include "dog.h"

/**
 * new_dog - a function that frees dogs.
 * @d: the dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
free (d);
free(d-> name);
free(d-> owner);
}