#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int mask = 1;

	for (i = 0; i < sizeof(unsigned long int) * 8 - 1; i++)
	{
		if (mask > n)
			break;
		mask <<= 1;
	}

	if (n == 0)
		_putchar('0');
	else
	{
		for (j = i; j >= 0; j--)
		{
			if ((n >> j) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
