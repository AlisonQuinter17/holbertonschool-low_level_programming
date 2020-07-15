#include "function_pointers.h"

/**
 * print_name - main function
 * @name: Pointer to the string name.
 * @f: The printing function pointer.
 *
 * Description: This function prints a name.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
