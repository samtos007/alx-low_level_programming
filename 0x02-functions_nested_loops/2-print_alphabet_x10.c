#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0).
 */

void print_alphabet_x10(void)
{
	int alphabt_count = 0;

	while (alphabt_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		alphabt_count++;
		_putchar('\n');
	}
}
