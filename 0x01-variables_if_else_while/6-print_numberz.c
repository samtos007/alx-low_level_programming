#include <stdio.h>

/**
 * main - this is the primary function
 *
 * description - prints numbers from 0 -9 
 *
 * Return: should be 0
 */

int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar(10);

	return (0);
}
