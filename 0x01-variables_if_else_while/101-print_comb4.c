#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Returns all possible different combinations
 * of three digits, separated by comma
 * Return: 0
 */
int main(void)
{
int a, b, c;
for (a = 48 ; a < 56; a++)
{
b = a + 1;
while (b < 57)
{
c = b + 1;
while (c < 58)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55)
{
putchar(44);
putchar(32); }
c++; }
b++;
}
}
putchar(10);
return (0);
}
