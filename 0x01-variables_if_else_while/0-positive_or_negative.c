#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main Entry point
 * my code
 * Return: sucess always
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		/* for loop */
		/* My Code */
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
		return (0);
}
