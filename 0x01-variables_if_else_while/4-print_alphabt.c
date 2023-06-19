#include <stdio.h>

/**
 * main - Primary program function
 *
 * description: Prints the alphabet in lowercase except 'q' and 'e'
 *
 * Return: This is always 0 for asuccessful run
 */

int main(void)
{
	int a; /* variable declaration */

	a = 97; /* variable assignment for ASCII code for 'a' */

	while (a < 123) /* While loop conditn */
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++; /* Increment */
	}
	putchar(10); /* Inserts a new line */

	return (0); /* Final return value  */
}
