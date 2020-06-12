#include <stdio.h>

/**
 * main - This program prints the alphabet ignoring the q and e characters.
 *
 * Return: 0.
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar (i);
	}

	putchar('\n');
	return (0);
}
