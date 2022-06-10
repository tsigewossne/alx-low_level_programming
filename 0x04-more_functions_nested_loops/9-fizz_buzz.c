#include "main.h"

/**
 * print_number - to print the fizz-buzz number
 *
 *Description: print fizz for multiples of 3 and buzz for multiples of 5
 *
 * Return: print fizz for multiples of 3 and buzz for multiples of 5
 */
void print_number_9(void)
{
int x;
for (x = 0; x <= 100; x++)
{
if (x % 3 == 0)
{
_putchar("fizz");
}
else if (x % 5 == 0)
{
_putchar("Buzz");
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
