#include "main.h"

/**
 * print_array- prints elements of an array of integers
 *
 * description - The program prints the 'n' elements of an array
 *
 * @n: coun of the number of input digits
 * @a:
 *
 * Return: returns nothing or void
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
