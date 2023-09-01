#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * coin-counter - count the coins
 * @x: the money
 * Return: the minimum number of coins to make change 
 * for an amount of money.
 */
int coin_counter(int x)
{
int coin 0;
while (x >= 25)
{
if (x / 25 >= 1)
{
coin++;
x -= 25;
}}
while (x >= 10)
{
if (x / 10 >= 1)
{
coin++;
x -= 10;
}}
while (x >= 5)
{
if (x / 5 >= 1)
{
coin++;
x -= 5;
}}
while (x >= 2)
{
if (x / 2 >= 1)
{
coin++;
x -= 2;
}}
while (x >= 1)
{
if (x / 1 >= 1)
{
coin++;
x -= 1;
}}
return (coin);
}

/**
 * main - check the code
 * @argc: the counter for arguments
 * @argv: an array of strings for arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int x, coin;
if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x <= 0)
{
printf("0\n");
return (0);
}
coin = coin_counter(x);
printf("%d\n",coin);
return(0);
}
