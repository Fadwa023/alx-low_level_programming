#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success).
 */

int main(void)
{
char f = 'a';
while (f <= 'z')
{
putchar(f);
f++;
}
putchar('\n');
return (0);
}
