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
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 1;
	}
	printf("\n");
}
