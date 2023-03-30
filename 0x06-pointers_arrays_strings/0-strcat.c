#include "main.h"
/* _strcat : concatenates two strings.
 *@dest : string
 *@src : string
 * return : pointer to the resulting string dest
 */


char * _strcat(char *dest, char *src)
{
	char * d = dest;
	while (*dest != '\0')
	{
	dest++;
	}
	while(*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	return (d);
}
