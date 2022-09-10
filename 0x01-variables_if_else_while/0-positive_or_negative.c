#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* Lets do this */
/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		/* for loop */
		/* My Code */
		if n > 0
		{
			printf("n is postive \n");
		}
		else if (n == 0)
		{
			printf("n is zero \n");
		}
		else
		{
			printf("n is negative \n");
		}
		return (0);
}
