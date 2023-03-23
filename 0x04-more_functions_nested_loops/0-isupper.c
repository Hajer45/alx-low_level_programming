#include "main.h"

/**
 * _isupper - Check if character is uppercase
 * @c: char to be tested
 *
 * Return: Always 0 (Success)
 **/

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
	return (1);
	}
	return (0);
}
