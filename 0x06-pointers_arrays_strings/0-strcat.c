#include "main.h"

/**
 * *_strcat - function concatenates strings
 * @dest: first argument - char pointer
 * @src: second argument - char pointer
 * Return: returns a character
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/*Find the end of the dest string*/
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append the src string to the dest string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	/* Add a terminating null byte */
	*ptr = '\0';

	return dest;
}
