#include "main.h"

/**
 * _puts - Entry point
 * takes pointer of first and prints the string
 * @str: pointer of char
 * Return: void
 **/

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
