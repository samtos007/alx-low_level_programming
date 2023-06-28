#include <stdio.h>
#include "main.h"

/**
 * print_array- prints elements of an array of integers
 *
 * description - The program prints the 'n' elements of an array
 *
 * @n: coun of the number of input digits
 * @a: input array
 *
 * Return: returns nothing or void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
