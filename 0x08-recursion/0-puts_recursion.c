#include "main.h"

/**
 * _puts_recursion - this recursive function prints a string, then a new line
 * @s: string
 * Return: returns void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('n');
}
