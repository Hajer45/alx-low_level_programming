#include "main.h"
/**
 * _memcpy - copy the first n bytes of the memory area src to dest
 *@dest : pointer to char
 *@src : pointer to char
 *@n : unsigned int
 * Return: always pointer to char
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *t = dest;
unsigned int i = 0;
while (i < n)
{
*t = *src;
src++;
t++;
i++;
}
return (dest);
}
