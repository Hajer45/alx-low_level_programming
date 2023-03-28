#include "main.h"

/**
 * _strlen - Entry point
 * takes pointer of first character of string and returns string length
 * @s: pointer
 * Return: Integer string length
 **/

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
		{
	strlen++;
	s++;
		}
	return (strlen);
}
