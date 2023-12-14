#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int y;

	x = n ^ m;
	y = 0;

	while (x)
	{
		y++;
		x &= (x - 1);
	}

	return (y);
}
