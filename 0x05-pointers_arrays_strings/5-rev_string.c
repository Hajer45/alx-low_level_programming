i#include "main.h"

/**
 * rev_string - Entry point
 * takes pointer of first and reverse the string
 * @s: pointer to first character
 * Return: void
 **/

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len / 2; i++)
	{
	tmp = s[i];
	s[i] = s[len - 1 - i];
	s[len - 1 - i] = tmp;
	}
}
