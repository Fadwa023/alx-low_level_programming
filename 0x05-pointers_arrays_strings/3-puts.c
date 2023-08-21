#include "main.h"

/**
 * _puts - Print a string, followed by a new line.
 * @str: type char pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
int x = 0;

while (str[x] != '\0')
x++;
{
_putchar(str[x]);
}
_putchar('\n');
}
