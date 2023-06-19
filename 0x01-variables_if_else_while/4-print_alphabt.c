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

	while ((a < 123) && (a != 113) && (a != 101)) /* While loop conditn */
	{
		putchar(a); /* Print the values of 'a' */
		a++; /* Increment */
	}

	return (0); /* Final return value  */
}
