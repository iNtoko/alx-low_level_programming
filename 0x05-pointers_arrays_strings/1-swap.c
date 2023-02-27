#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: the second integer to be swapped.
 * Retur: nothing
 */
void swap_int(int *a, int *b)
/* the function that swaps the value of two integers */
{
int temp = *a;

*a = *b;
*b = temp;
}
