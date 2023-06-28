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
	int i = 0;

	for (0; i < n; i++)
	{
		printf("%d ", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
