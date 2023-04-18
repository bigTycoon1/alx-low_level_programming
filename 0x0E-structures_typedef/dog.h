#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
  * struct dog - structure type of dog variable
  * @name: the name to be initialized
  * owner: owner of the dog to be initialized
  * age: age of dog to initialize
  *
  * Description: structure for dog with name,age and owners of the dog.
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
