#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
	int n;
	int k;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	else if (k == 0)
		printf("Last digit of %d is %d and is 0\n", n, k);
	else if (k < 6 && !0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	return (0);
}
