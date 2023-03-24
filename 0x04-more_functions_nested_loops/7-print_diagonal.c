#include "main.h"

/**
 * print_diagonal - Entry point
 *@n: diagonal length
 * Return: Always 0 (Success)
 **/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		if (n > 1 && j!= (n - 1))
		{
		_putchar('\n');
		for (j =0; j <= i; j++)
		_putchar(' ');
		}
	}
	_putchar('\n');
}

