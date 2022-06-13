#include "main.h"

/**
 * _isalpha - This function checks for lowercase character
 *
 * @c: ia an ascii character
 *
 * Return: 1 if lowercase
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
