#include "main.h"
/**
 * _strlen_recursion -  len of string
 *@s : pointer to char
 * Return: always int
 **/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
