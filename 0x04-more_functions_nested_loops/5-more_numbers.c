#include "main.h"

/**
 * more__numbers - Entry point
 *
 * prints numbers
 * Return: Always 0 (Success)
 **/

void more_numbers(void)
{
	int x;
        int i;
	for(i=0;i<=9;i++)
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
