#include "main.h"

/**
 * main - Primary function and swaps values
 *
 * @swap_int: swap function
 *
 * Return: Always 0 for a successful run.
 */

void swap_int(int *a, int *b)
{
	int unit = *a;
	*a = *b;
       *b = unit;
}       
