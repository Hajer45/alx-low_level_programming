#include "main.h"
#include <ctype.h>

/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation
 *@str: pointer to string.
 *Return: pointer to s.
 */

char *cap_string(char *str)
{
int i = 0;
int new_word = 1;
while (str[i] != '\0')
{
if (new_word && islower(str[i]))
{
str[i] = toupper(str[i]);
}
new_word = 0;
switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '\"':
case '(':
case ')':
case '{':
case '}':
new_word = 1;
break;
default:
break;
}
i++;
}
return (str);
}
