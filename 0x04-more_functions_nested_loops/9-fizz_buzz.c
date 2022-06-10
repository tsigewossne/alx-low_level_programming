#include "main.h"

/**
 * print_number_9 - to print the fizz-buzz number
 *
 *Description: print fizz for multiples of 3 and buzz for multiples of 5
 *
 * Return: Always 0
 */
void print_number_9(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}

