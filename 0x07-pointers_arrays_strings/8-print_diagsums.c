#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */


void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int x = 0;

for (x = 0; x < size; x++)
{
sum1 += a[x * size + x];
sum2 += a[x * size + (size - 1 - x)];
}
printf("%d, %d\n", sum1, sum2);

}
