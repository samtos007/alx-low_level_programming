#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @a: type int integer, can be negative or positive
 * Description: print +, 0, or - based on number, along with return
 * Return: 1 if +, 0 if 0, and -1 if -
 */

int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
