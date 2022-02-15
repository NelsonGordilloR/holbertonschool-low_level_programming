#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Returns all possible different combinations
 * of two digits, separated by comma
 * Return: 0
 */
int main(void)
{
int a, b;
for (a = 48 ; a < 57; a++)
{
b = a + 1;
while (b < 58)
{
putchar(a);
putchar(b);
if (a != 56)
{
putchar(44);
putchar(32); }
b++;
}
}
putchar(10);
return (0);
}
