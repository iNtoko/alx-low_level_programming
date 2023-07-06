#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned interger
 * @b: string containing binary numbers
 *
 * Return: converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
