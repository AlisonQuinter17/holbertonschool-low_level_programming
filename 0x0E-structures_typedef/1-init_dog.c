#include "dog.h"

/**
 * init_dog - main function.
 * @d: The pointer to the dog adress to initialize.
 * @name: The dog's name ("Django").
 * @age: The dog's age (3.5).
 * @owner: The dog owner's name ("Jay").
 *
 * Description: This function initialize a variable of type struct dog.
 *
 * Return: None.
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
