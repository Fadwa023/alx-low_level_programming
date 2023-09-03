#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: string that will be at the start
 * @src: string that will be at the end
 * Return: printer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
int x = 0;
while (dest[x++] != '\0')
;

x--;

while (*src)
dest[x++] = *src++;

return (dest);
}
