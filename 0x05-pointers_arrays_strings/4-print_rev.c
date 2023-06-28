#include "main.h"

/**
 * print_rev - prints a string in reverse order, then a new line.
 * @s: input string to the function
 * Return: returns nothing or void
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
