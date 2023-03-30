#include "main.h"

/**
 * _strncpy - Entry point
 *@dest: pointer to char
 *@src: pointer to char
 *@n: int
 * Return: Always pointer to char (Success)
 **/
char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}

