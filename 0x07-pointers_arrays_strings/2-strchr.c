#include "main.h"
#include <stddef.h>
/**
 * _strchr - pointer to the first occurrence of the character c in the string s
 *@s : pointer to char
 *@c : char
 * Return: always pointer to char
 **/

char *_strchr(char *s, char c)
{
char *p = NULL;
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (p);
}
