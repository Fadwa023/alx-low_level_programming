#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: type char pointer.
 *
 * Return: Always 0
 *
 */

int _strlen(char *s)
{
int x;
for (x = 0; *s++;)
x++;
return (x);
}
