#include "main.h"
/**
 * _puts_recursion - function that prints a string.
 * @s: the string to print
 *
*/
void _puts_recursion(char *s)
{
if (!*s)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(++s);
}
