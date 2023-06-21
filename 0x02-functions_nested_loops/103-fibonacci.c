#include <stdio.h>
/**
 * main - Primary function
 * Description: Print the sum of even Fibonacci numbers
 * not exceeding 4,000,000.
 * Return: 0 when successful
 */
int main(void)
{
	int i = 1, j = 2, totl = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			totl += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", totl);
	return (0);
}
