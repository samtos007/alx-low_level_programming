#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @b: int type number
 * Return: absolute value of @b
 */
int _abs(int b)
{
	if (b < 0)
	{
		return (b * -1);
	}
	else
	{
		return (b);
	}
}
