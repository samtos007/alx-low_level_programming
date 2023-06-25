#include <stdio.h>

/**
 * main - the program prints double digit combos
 *
 * Description: print doible digit combos
 *
 * Return: 0 for a successful run
 */

int main(void)
{
	int a, b;

	a = 48; /*ASCII code for 0, initialize*/
	b = 48; /*ASCII code for 0, initialize*/

	while (a < 58) /* While the first number is in range to 9 */
	{
		b = a + 1; /*Then the second number which is 48 - 0, + 1 = 1*/
		while (b < 58) /* While second number is within range - 9 */
		{
			putchar(a);
			putchar(b);

			if (a < 56 || b < 57)
			{
				putchar(44); /*ASCII for space */
				putchar(32); /*ASCII for comma*/
			}
			j++;
		}
		i++;
	}
	putchar(10);  /* ASCII for mew line*/

	return (0);
}
