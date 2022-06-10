#include "main.h"

/**
 * print_number_9 - to print the fizz-buzz number
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
if (x % 15 == 0)
{
printf("FizzBuzz");
}
else if (x % 3 == 0)
{
printf("fizz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf(x + '0');
}
}
printf('\n');
}
