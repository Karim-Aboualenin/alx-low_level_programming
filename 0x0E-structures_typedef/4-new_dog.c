#include "dog.h"
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
char *name, *owner;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
