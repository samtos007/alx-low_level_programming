#include <stdio.h>

/**
 * main - primary function
 *
 * description - this code prints the alphabet in reverse order
 *
 * Return: should be 0
 */

int main(void)
{
	int a;

	a = 122;
	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);

	return (0);
}
