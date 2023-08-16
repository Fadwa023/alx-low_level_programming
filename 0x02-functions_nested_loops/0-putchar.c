#include "main.h"

/**
 * main - entery point
 *
 * Description: Prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{

char name[] = "_putchar";
int a;

for (a = 0; a < 8; ++a)
{
putchar(name[a]);
}

putchar('\n');

return (0);
}
