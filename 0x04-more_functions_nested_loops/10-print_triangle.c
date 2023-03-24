#include "main.h"

/**
 * print_triangle - entry point
 *
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int r, h, s;

	for (r = 1; r <= size; r++)
	{
		for (s = size - r; s >= 1; s--)
		{
			_putchar(' ');
		}
		for (h = 1; h <= r; h++)
		{
			_putchar('#');
		}
		if (r != size)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
