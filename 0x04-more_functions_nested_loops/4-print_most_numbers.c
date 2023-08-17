#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 * Return: Always 0 (success)
 *
 */

void print_most_numbers(void)
{
int p = 0;
for (p = 0; p <= 9; p++)
{
if (p == 2 || p == 4)
continue;
_putchar(p + '0');
}

_putchar('\n');
}
