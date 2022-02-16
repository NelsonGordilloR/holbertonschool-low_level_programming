#include "main.h"
/**
 * _isalpha - this function returns 1
 * if variable "c" is a letter, 0 otherwise
 * @c: char type letter
 * Return: 1 if c is a letter, 0 if it is not
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
