#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 * ten times
 * returns: 0
 */
void more_numbers(void)
{
int a, b;
for (b = 0; b <= 9; b++)
{
a = 0;
for (a = 0; a <= 14; a++)
{
if (a > 9)
{
_putchar(48 + a/10);
}
_putchar(48 + a % 10);
}
_putchar('\n');
}
}
