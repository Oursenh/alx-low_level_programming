#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: int to swap
 * @b: int to swap
 */
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
