#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
int i, j, tmp;
for (i = 0, j = n - 1; i < j; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
