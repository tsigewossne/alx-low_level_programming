#include <stdio.h>
#include "main.h"
/**
 * main - A function that checks for uppercase character.
 *
 * @c: is the character to  check
 *
 * Return: 1 if c is uppercase otherwise 0
 */
int main(int c)
{
int a = isupper(c);

if (a == 0)
return (0);
else
return (1);
}
