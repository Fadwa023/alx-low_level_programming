#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 *
 * @size: size is the size of the square
 * Return: Always 0.
 */


void print_square(int size)
{
int x, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; ++x)
{
for (j = 0; j < size; ++j)
{
_putchar('#');
}
_putchar('\n');
}
}
}
