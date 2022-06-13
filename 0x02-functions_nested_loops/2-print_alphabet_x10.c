#include "main.h"

/**
 * print_alphabet_x10 - This functions prints the alphabet in lowercase,
 * 10 times.
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char m, n;
for (n = 0; n < 10; n++)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}

}
