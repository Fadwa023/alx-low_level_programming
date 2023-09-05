#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
char *strd;
unsigned int x, y;
if (str == NULL)
return (NULL);

for (x = 0; str[x] != '\0'; x++)
;

strd = (char *)malloc(sizeof(char) * (x + 1));

if (strd == NULL)
return (NULL);

for (y = 0; y <= x; y++)
strd[y] = str[y];
return (strd);
}
