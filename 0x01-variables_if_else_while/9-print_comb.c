#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: a program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: Alyways zero
*/
int main(void)
{
int number = 0;
while (number <= 9)
{
putchar(number + '0');
if (number != 9)
{
putchar(',');
putchar(' ');
}
number++;
}
putchar('\n');
return (0);
}
