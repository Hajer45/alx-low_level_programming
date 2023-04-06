#include "main.h"

/**
 * _sqrt_ - Gives square root of number
 *
 * @n: int
 * @k: int
 *
 * Return: int
 */

int _sqrt_(int n, int k)
{
if (n < 0)
{
return (-1);
}
if ((n) - (k * k) == 0)
{
return (k);
}
if (n < (k * k))
{
return (-1);
}
else
{
return (_sqrt_(n, k + 1));
}
}

/**
 * _sqrt_recursion - Return sqrt of number
 *
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_(n, 0));
}

