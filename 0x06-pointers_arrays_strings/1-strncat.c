#include "main"

/**
 * _strncat - this function conccatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: This is the total number of bytes used from src
 * Return: dest value pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0, count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 < n)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
