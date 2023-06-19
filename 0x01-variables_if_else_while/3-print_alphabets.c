#include <stdio.h>

/**
 * main - This is the primary function of the program.
 *
 * Description - This proga, prints the letters in the alphabet
 *
 * Return: This is always 0 for a successful code run.
 */

int main(void)
{
	int a, b; /* variable declaration */

	a = 97; /* Variable assignment - ASCII 97 = 'a' (lowercase) */
	b = 65; /* Variable assignment - ASCII 65 = 'A' (UPPERCASE) */

	while (a < 123) /* While variable 'a' = 97 = 'a' but less than 123 */
	{
		putchar(a); /* Print the ASCII equivalent of 97,98,99 - 122 */
		a++; /* After printng for 97='a' and 1 to 97 to make it 98...*/
	}

	while (b < 91) /* While variable 'b' = 65 = 'A' but less than 91 */
	{
		putchar(b); /* Print the ASCII equivalent of 65,66,67 - 90 */
		b++; /* After printing for 65, add 1 to make it 66 and print as well etc */
	}

	putchar(10); /*This adds a new line after program exec. */

	return (0); /* Return 0 for a successfu execution.*/
}
