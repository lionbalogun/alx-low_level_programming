#include <stdio.h>

/**
 * main - putchar print Uppercase and lowercase alphabets
 *
 * Description: using the main function
 * this program prints Uppercase and Lowercase Alphabets
 * Return: 0
 */

int main(void)
{
int c ;

for (c = 48; c <= 57; c++)

{
putchar(c);
if (c != 57)
{
putchar(',');

putchar(' ');

}

}
putchar('\n');

return (0);

}