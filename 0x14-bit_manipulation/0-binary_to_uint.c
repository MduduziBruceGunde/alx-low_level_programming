#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string that is containing the binary number
 *
 * Return: the converted number, or 0 if the input is invalid
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
	}

	return (result);
}
