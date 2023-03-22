#include "main.h"
#include <limits.h>
/**
 * print_last_digit - return last number
 * @n : long long
 * Return: int 0-9.
 */
int print_last_digit(int n)
{
if (n == INT_MIN)
{
_putchar('8');
return (8);
}
else
{
if (n < 0)
n = n * -1;
_putchar('0' + (n % 10));
return (n % 10);
}
}
