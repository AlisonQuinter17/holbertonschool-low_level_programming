#include "holberton.h"

/**
 * _atoi - main function.
 * @s: Pointer to the string.
 *
 * Description: This function convert a string to an integer.
 *
 * Return: The integer value of string.
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
		{
			break;
		}

		else if (*(s + count) == '-')
		{
			pn *= -1;
		}

		else if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
			{
				m *= 10;
			}
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}

	return (oi * pn);
}
