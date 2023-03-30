#include "main.h"

/**
 * _strncat - Entry point
 *@dest: pointer to char
 *@src: pointer to char
 *@n: int
 * Return: Always pointer to char (Success)
 **/

char *_strncat(char *dest, char *src, int n)
{
char *d = dest;

char *s = src;

int i = 0;

while (*d != '\0')
{
d++;
}
while (i < n && *s != '\0')
{
*d = *s;
s++;
d++;
i++;
}
return (dest);
}

