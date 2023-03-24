#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, x;

	for (i=0;i<=9;i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + (x % 10));
		}
		_putchar('\n');
	}
}
