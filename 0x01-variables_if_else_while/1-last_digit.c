#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
srand(time(0));
i = rand() - RAND_MAX / 2;
if (i % 10 > 5)
printf("Last digit of %d is %d and is greater than 5\n", i, i % 10);
else if (i % 10 == 0)
printf("Last digit of %d is %d and is 0\n", i, i % 10);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", i, i % 10);
return (0);
}
