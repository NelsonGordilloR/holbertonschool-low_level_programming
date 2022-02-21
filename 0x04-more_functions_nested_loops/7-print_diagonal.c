#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n : integer
 * returns: 0
 */
void print_diagonal(int n)
{
int c, d;
if (n > 0)
{
for (c = 0; c < n; c++)
{
for (d = 0; d < n; d++)
{
if (c == d)
_putchar('\\');
else if (c > d)
_putchar(' ');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
