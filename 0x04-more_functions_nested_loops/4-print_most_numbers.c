#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * prints numbers
 * Return: Always 0 (Success)
 **/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	if (x != 2 && x != 4)
	{
	_putchar('0' + x);
	}
	}
	_putchar('\n');
}
