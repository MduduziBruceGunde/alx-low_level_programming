#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string that is containing the binary number
 *
 * Return: the converted number, or 0 if the input is invalid
 */

unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	size_t len = strlen(b);
	unsigned int decimal_dig = 0;

	for (size_t i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimal_dig = (decimal_dig << 1) | (b[i] - '0');
	}

	return (decimal_dig);
}
