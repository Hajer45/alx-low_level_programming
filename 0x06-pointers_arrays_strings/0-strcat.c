#include "main.h"
/**
 *_strcat - Entry point
 *@dest: pointer to char
 *@src: pointer to char
 * Return: Always pointer to char(Success)
 **/
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	return (d);
}
