#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This function returns the alphabet firstly in lowercase
* and finally in uppercase
* Return: 0
*/
int main(void)
{
char a;
char A;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}
putchar('\n');
return (0);
}

