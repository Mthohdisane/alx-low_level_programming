#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: c is an ascii character
 * Return: 1 if it a lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
