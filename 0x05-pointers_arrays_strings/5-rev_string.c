void rev_string(char *s)
{
int len = 0;
int i, j;
char temp;
while (*s != '\0')
{
len++;
s++;
}
for (i = 0; i < len; i++)
{
s--;
}
for (j = 0; j < len / 2; j++)
{
temp = *(s);
*s = *(s + len - 2 * j - 1);
*(s + len - 2 * j - 1) = temp;
s++;
}
}
