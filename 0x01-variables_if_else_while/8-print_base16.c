#include <stdio.h>

/**
 * main - primary function
 *
 * description - prints the hexadecimals
 *
 * Return: should return 0
 */

int main(void)
{
	int a, b;

	a = 48;
	b = 97;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}
	putchar(10);

	return (0);
}
