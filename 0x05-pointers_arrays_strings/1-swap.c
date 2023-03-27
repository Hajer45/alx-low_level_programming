#include "main.h"

/**
 * swap_int - Entry point
 * swaps the values of two integers
 * @a: pointer
 * @b: pointer
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
