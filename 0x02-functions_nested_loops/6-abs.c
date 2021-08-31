#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: value of last digit
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
