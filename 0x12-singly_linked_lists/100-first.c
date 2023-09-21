#include "lists.h"
void print_hare_and_Tortoise(void) __attribute__((constructor));
/**
 * print_hare_and_Tortoise - a function that prints You're beat! and 
 * yet, you must allow,\nI bore my house upon my back!\n before
 * the main function is executed.
 * Return: Nothing
*/
void print_hare_and_Tortoise(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
