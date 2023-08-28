#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the mem area
 * @b:the byte to fill with
 * @n: number of bytes to fill
 * Return: pointer to the mem area
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
