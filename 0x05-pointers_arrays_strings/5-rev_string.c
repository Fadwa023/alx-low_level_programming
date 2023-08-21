#include "main.h"

/**
 * rev_string - function print string in reverse
 *
 * @s: string to be written
 */

void rev_string(char *s)
{
int x, y;
int z;

for (x = 0; s[x] != 0; x++)
y = 0;
x = x - 1;
while (y < x)
{
z = s[x];
s[x] = s[y];
s[y] = z;
y++;
x--;
}
}
