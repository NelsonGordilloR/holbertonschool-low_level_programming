#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This function returns the alphabet in lowercase except q and e
*Return: 0
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
{
putchar(a); }
}
putchar('\n');
return (0);
}

