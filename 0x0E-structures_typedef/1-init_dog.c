#include "dog.h"

/**
 * init_dog - main function.
 * @d: The dog's name.
 * @name: The dog's age.
 * @age: The dog owner's name.
 * @owner: The dog owner's name.
 *
 * Description: This function initialize a variable of type struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
