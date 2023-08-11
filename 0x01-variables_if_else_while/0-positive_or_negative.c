<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point to the code
 * Return: return 0 if success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	    printf("is positive\n");
    else if (n < 0)
        printf("is negative\n");
    else
        printf("is zero");
	return (0);
}
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point to the code
 * Return: return 0 if success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	    printf("is positive\n");
    	else if (n < 0)
            printf("is negative\n");
    	else
            printf("is zero");
	return (0);
}
>>>>>>> 76f9ca6265e20c40bbada8c35d0322d1c9cb35db
