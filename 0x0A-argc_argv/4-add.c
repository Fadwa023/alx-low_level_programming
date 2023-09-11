#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
int x, y, sum = 0;
char *symb;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (x = 1; argv[x]; x++)
{
y = strtol(argv[x], &symb, 10);
if (*symb)
{
printf("Error\n");
return (1);
}
else
{
sum += y;
}
}
printf("%d\n", sum);

return (0);
}