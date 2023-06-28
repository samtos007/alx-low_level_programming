#include "main.h"

/**
* swap_int - The function that swaps
*
* @a: first integer
*
* @b: second integer
*
* Return: Always 0 for a successful run.
*/

void swap_int(int *a, int *b)
{
int unit = *a;
*a = *b;
*b = unit;
}
