#include "main.h"
#include <stdlib.h>
#include "string.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
char *x;
int y;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

y = strlen(s1) + strlen(s2) + 1;
x = (char *) malloc(y *sizeof(char));

if (x == NULL)
return (NULL);

strcpy(x, s1);
strcat(x, s2);

return (x);
}
