#include "main.h"

/**
 * swap_int - function that swap value of 2 integers
 *
 * @a: type int pointer.
 * @b: type int pointer.
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
