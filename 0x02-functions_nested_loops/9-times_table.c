#include "main.h"
/**
 * times_table - this funcion print
 * the 9 times tables
 * Return: 0
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int mult = j * i;
if (j == 0)
{
_putchar('0');
}
else if (mult <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(mult + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(mult / 10 + '0');
_putchar(mult % 10 + '0');
}
}
_putchar('\n');
}
}
