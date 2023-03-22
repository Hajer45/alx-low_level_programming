#include <stdio.h>
#include "main.h"
/**
 * function to print lower alphabet 
 * */
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
