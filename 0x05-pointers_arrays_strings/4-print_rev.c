#include "main.h"
/**
 * print_rev - Print a string, in reverse followed by a new line.
 * @str: Type char pointer
 * Return: Always 0.
 */
void print_rev(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
}
for  (a = a - 1; a >= 0; a--)
{
_putchar(str[a]);
}
_putchar('\n');
}
