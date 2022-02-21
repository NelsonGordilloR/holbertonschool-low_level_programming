#include "main.h"
/**
 * print_line - prints a line
 * @c : integer
 * @n : integer
 * returns: 0
 */
void print_line(int n)
{
int c = 0;
while (c < n)
{
_putchar(95);
c++;
}
_putchar('\n');
}
