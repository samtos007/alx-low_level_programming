#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @m: int type number
 * Return: return value of last digit
 */
int print_last_digit(int m)
{
	int c;

	if (m < 0)
	{
		c = -1 * (m % 10);
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c = m % 10;
		_putchar(c + '0');
		return (c);
	}
}
