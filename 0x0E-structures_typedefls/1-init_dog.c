#include "dog.h"

/**
  * init_dog - function of initialisation
  * @d: input struct dog
  * @name: input name of the dog
  * @age: dog
  * @owner: dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
