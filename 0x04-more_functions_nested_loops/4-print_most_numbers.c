#include "main.h"

/**
 * print_most_numbers - to print the most number
 *
 *Description: prints the numbers excluding 2 and 4
 *
 * Return: the numbers escluding 2 and 4
 */
void print_most_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
