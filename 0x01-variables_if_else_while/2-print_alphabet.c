#include <stdio.h>
#include <ctype.h>

/**
 * main -Entry point
 *
 * my code
 * Return: sucess always
 */

int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);
}
return (0);
}
