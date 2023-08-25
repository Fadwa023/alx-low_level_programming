#include "main.h"

/**
 * reverse_array - Function that reverse the content of an array of int
 * @a: Type int
 * @n: Type int
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int x;
int y;

x = 0;
n = n - 1;
while (x < n)
{
y = a[x];
a[x] = a[n];
a[n] = y;
x++;
n--;
}
}
