#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
  int c='a';
  int i;

  for (i = 0; i < 26; i++)
    {
      printf("%c",c++);
    }
  printf("\n");
  return (0);
}
