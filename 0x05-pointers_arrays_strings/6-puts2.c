#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: targeted string
 */
void puts2(char *str)
{
int x  = 0;
while (*(str + x) != '\0')
{
if (x % 2 == 0)
putchar(*(str + x));
x++;
}
putchar('\n');
}
