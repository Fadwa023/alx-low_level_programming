#include "main.h"
/**
 * _strncat -  a function that concatenates two strings.
 * @dest: string that will be at the start
 * @src: string that will be at the end
 * @n: bytes from src; and
 * Return: printer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int y = 0;
while (dest[x++])
;
x--;
for (y = 0; y < n && src[y] != '\0'; y++)
dest[x++] = src[y];

dest[x] = '\0';

return (dest);
}
