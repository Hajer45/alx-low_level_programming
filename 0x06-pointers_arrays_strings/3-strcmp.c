/**
 * _strcmp - compare tow strings
 *@s1: pointer to char
 *@s2: pointer to char
 * Return: Always int (Success)
 **/

int _strcmp(char *s1, char *s2)
{
int counter, cmpVal;

counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}
cmpVal = s1[counter] - s2[counter];
return (cmpVal);
}
