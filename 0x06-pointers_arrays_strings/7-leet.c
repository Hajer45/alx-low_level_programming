/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
char *leet_chars[] = {"4", "3", "0", "7", "1"};
char *letters[] = {"aA", "eE", "oO", "tT", "lL"};

for (int i = 0; i < 5; i++)
{
for (int j = 0; s[j] != '\0'; j++)
{
if (s[j] == letters[i][0] || s[j] == letters[i][1])
{
s[j] = leet_chars[i][0];
}
}
}
return (s);
}
