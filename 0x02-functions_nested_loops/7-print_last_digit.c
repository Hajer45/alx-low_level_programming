#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - return last number
 * @n : int
 * Return: int 0-10.
 */
int print_last_digit(int n)
{
int l =_abs(n) % 10;
_putchar('0'+l);
return (l);
}
