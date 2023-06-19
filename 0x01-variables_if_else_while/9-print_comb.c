#include <stdio.h>

/**
 * main - primary function
 *
 * description - prints all possible combination of single digits
 *
 * Return: should be 0
 */

int main(void)
{
	int a, b, c;

	a = 48;
	b = 44;
	c = 32;
	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
		putchar(b);
		putchar(c);
		}
		a++;
	}
	putchar(10);

	return (0);
}
