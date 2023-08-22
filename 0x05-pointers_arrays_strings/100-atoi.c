#include "main.h"
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
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer in string
 */

int _atoi(char *s)
{
int start, len, i = 0, neg, sign = 1, ten = 1, num_of_digits = 0, num, temp, j, k,temp_2, l,no_digit = 1;
len = _strlen(s);
printf("len  = %d \n",len);
for(j = 0;j <= len; j++)
{
printf("s[j]  = %c \n",s[j]);
if (s[j] >= '0' && s[j] <= '9')
{
start = j;
no_digit = 0;
printf("start  = %d \n",start);
break;
}}
if(no_digit == 1)
return(0);
while(i < len)
{
if (s[i] == '-')
neg++;
i++;
}
if (neg % 2 != 0)
sign = -1;
printf("sign  = %d \n",sign);
temp = start;
while((s[temp] >= '0' && s[temp] <='9') && s[temp] != '\0')
{
num_of_digits++;
temp++;
}
printf("num_of_digits  = %d \n",num_of_digits);
temp_2=num_of_digits;
for (l = 1;l < num_of_digits; l++)
ten *= 10;
printf("ten = %d \n",ten);
for (k = 0; k < temp_2; k++)
{
printf("s[start]  = %c \n",s[1]);
num += (s[start] - '0') * ten;
printf("num = %d\n",num);
ten /= 10;
start++;
}
return (num * sign);
}
