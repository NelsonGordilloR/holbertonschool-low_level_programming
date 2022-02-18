#include "main.h"
/**
 *  _isdigit - This function returns
 * @c is 1 if is a digit and 0 otherwise
 *  Return: 1 if is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
  if (c >= 48 && c < 57)
    return (1);
  else
    return (0);
}
