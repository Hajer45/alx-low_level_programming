#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print all alphabet
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
