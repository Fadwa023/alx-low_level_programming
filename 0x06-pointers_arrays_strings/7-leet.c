#include "main.h"

/**
 * leet -  function that encodes a string into 1337.
 * @s: targeted string
 * Return: the string coded
 */

char *leet(char *s)
{
char *Letters = "aAeEoOtTlL";
char *Numbers = "4433007711";
int x, y;
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; Letters[y] != '\0'; y++)
{
if (s[x] == Letters[y])
{
s[x] = Numbers[y];
break;
}
}
}

return (s);
}
