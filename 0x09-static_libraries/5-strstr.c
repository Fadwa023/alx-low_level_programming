#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack:the string to search in
 * @needle:the substring to search for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int x = 0, y = 0;

while (haystack[x])
{
while (needle[y] && (haystack[x] == needle[0]))
{
if (haystack[x + y] == needle[y])
y++;
else
break;
}
if (needle[y])
{
x++;
y = 0;
}
else
return (haystack + x);
}
return (0);
}
