#include <stdio.h>

/**
 * main - print the letters of the alphabet in reverse
 *
 *
 * Return: 0
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
