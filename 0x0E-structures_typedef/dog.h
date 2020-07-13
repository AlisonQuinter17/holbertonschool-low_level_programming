#ifndef DJANGO_H
#define DJANGO_H

/**
 * struct dog - The structure of the dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog owner's name.
 *
 * Description: It is the structure of an adorable puppy named Django.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};



/* Prototypes */

typedef struct dog dog_t;

int _putchar(char c);

char *_strdup(char *str);

char *_strcpy(char *dest, char *src);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
