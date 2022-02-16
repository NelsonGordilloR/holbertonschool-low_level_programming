#include "main.h"
/**
 * print_alphabet_x10 - this function prints 10 times
 * the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int contador;
char a ;
for(contador = 0; contador <= 10; contador++)
{
a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar(10);
}
}
