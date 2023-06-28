#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: pointer to the string we want to print
 *
 * Return: returns void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
