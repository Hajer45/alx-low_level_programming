#include "main.h"
/**
 * _memset -  the first n bytes of the memory area constant byte b
 *@s : pointer to char
 *@b : char
 *@n : unsigned int
 * Return: always pointer to char
 **/

char *_memset(char *s, char b, unsigned int n)
{
char *t = s;
unsigned int i = 0;
while (i < n)
{
*t = b;
t++;
i++;
}
return (s);
}
