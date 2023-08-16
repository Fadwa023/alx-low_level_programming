 #include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
*/

void times_table(void)
{
int h;
int i;
int j;
for (i = 0; i < 10; ++i)
{
putchar(48);
for (j = 1; j < 10; ++j)
{
putchar(',');
putchar(' ');
h = i * j;
if (h <= 9)
putchar(' ');
else
putchar((h / 10) + 48); /*get the first digit*/
putchar((h % 10) + 48); /*get the second digit*/
}
putchar('\n');
}
}
