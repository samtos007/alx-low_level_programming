#include <stdio.h>

/**
 * main - This is the primary exec function
 *
 * desceiption - Prints numbers from 0 - 9
 *
 * Return: returns 0 for a successful code
 */

int main(void)
{
	int a;

	a = 48; /* Variable assignment */

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar(10);

	return (0);
}
