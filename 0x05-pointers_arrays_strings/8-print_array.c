#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array
 * of integers, followed by a new line.
 *@a: int array
 *@n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int m;

for (m = 0; m < n; m++)
{
if (m != (n - 1))
printf("%d, ", a[m]);
else
printf("%d", a[m]);
}
printf("\n");
}
