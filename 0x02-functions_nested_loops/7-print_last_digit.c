/**
 * print_last_digit - return last number
 * @n : int
 * Return: int 0-10.
 */
int print_last_digit(int n)
{
if (n > 0)
return (n % 10);
else
return ((-1 * n) % 10);
}
