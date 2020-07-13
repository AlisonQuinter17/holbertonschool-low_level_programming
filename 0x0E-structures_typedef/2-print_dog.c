#include "dog.h"
#include <stdio.h>

/**
 * print_dog - main function.
 * @d: The pointer to the dog to print.
 *
 * Description: This function prints a struct dog.
 *
 * Return: None.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
