#include "holberton.h"

/**
 * rot13 - main function.
 * @s: Pointer to the string.
 *
 * Description: This function encodes a string using rot13.
 *
 * Return: The string in rot13 base.
 */

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = rot[j];
				break;
			}
		}
	}
	return (s);
}
