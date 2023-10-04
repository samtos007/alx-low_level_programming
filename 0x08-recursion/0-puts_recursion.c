#include "main.h"

/**
 * _puts_recursion - the functions prints a string, then a new line
 * @s: string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0') /* checks if the string is not null */
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n'); /* puts a new line after the string */
}
