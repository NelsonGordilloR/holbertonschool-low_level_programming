#include "main.h"
/**
 * _islower - this function returns 1
 * if variable "c" is lowercase, 0 otherwise.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if it is not
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
