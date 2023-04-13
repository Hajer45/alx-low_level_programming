#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *create_array - Entry point
 *@size: int
 *@c: char
 * Return: Always pointer to char(Success)
 **/
char *create_array(unsigned int size, char c)
{
char *array = (char *) malloc(size * sizeof(char));
unsigned int i;
if (size == 0)
{
return (NULL);
}
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}

