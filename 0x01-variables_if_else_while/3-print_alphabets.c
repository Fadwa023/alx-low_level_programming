#include <stdio.h>

/**
 *  main - entry point
 *
 * Return: always 0 (success).
*/

int main(void)
{
char m = 'a';
while (m <= 'z')
{
if (m == 'q' || m == 'e')
{
m++;
continue;
}
putchar(m);
m++;
}
putchar('\n');
return (0);
}
