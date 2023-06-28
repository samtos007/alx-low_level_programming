#include "main.h"

/**
 * puts2- Prints every other character of a string
 *
 * @str: input string
 *
 * Return: returns nothing or void
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
