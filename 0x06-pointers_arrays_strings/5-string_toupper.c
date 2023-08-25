#include "main.h"
/**
 * string_toupper - a function that changes  lowercase to uppercase.
 * @n: pointer to the string
 * Return: the string to upercase
 *
*/


char *string_toupper(char *n)
{
char *x = n;
while (*n)
{
if (*n >= 'a' && *n <= 'z')
*n -= 32;
n++;
}
return (x);
}
