#include <stdio.h>

/**
 * main - this is the primary function to be exceuted
 *
 * description - This program prints the alphabet in lowercase
 *
 * Return: This always return 0 if the code runs successfully
 */

int main(void)
{
	int a = 97; /* This initilises a to 97 which is the ACSII code for letter a */

	while (a < 123) /* Loops the ASCII code through 122 which represents z */
	{
		putchar(a); /* prints the values of the a variable in iteration */
		a++; /* increments variable a from 97 to 122 */
	}
	putchar(10); /* 10 is the ASCII code for "new line" */

	return (0);
}
