#include "main.h"
/**
 * _isalpha - Check if character is a alphabet character.
 * @i: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);

	else
		return (0);
}
