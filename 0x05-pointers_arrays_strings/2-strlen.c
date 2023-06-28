#include "main.h"

/**
 * _strlen - returns the string's length when run
 * @c: input string
 * Return: length of the string passed to the function
 */
int _strlen(char *c)
{
	int count = 0;

	while (*(c + count) != '\0')
		count++;
	return (count);
}
