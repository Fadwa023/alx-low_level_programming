#include "main.h"

/**
 * rev_string - function print string in reverse
 *
 * @s: string to be written
 */

void rev_string(char *s)
{
int x;
int y;
char z;
for (x = 0; s[x] != '\0'; x++)

for (y = 0; y < x / 2; y++)
{
	z = s[x];
	s[x] = s[x - 1 - y];
	s[x - 1 - y] = z;
}

}
