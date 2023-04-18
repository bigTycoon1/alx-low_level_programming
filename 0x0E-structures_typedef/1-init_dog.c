#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - function that initialize a variable of type struct dog
  * @d: the pointer to struct type to be initialized
  * @name: the dog name to be initialized
  * @owner: the dog owner to be initialized
  * @age: the dog age to be initialized
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
