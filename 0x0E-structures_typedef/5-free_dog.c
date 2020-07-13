#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - main function.
 * @d: Pointer to
 *
 * Description: This function frees the dogs.
 *
 * Return: None.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
