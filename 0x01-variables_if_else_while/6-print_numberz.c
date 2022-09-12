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
int i;

for (i = 48; i < 58; i++)

{
    putchar(i);
}
putchar('\n');
return (0);
}