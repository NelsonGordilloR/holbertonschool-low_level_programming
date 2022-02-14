#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This function prints all the
 * possible combinations of single-digit numbers
 * separated by commas, followed by a space
 *Return: 0
 */
int main(void)
{
int a;
for (a = 48; a < 58; a++)
{
putchar(a);
putchar(44);
putchar(32); }
putchar('\n');
return (0);
}
