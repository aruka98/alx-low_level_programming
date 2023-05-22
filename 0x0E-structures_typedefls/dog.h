#ifndef DOG_H
#define DOG_H

/**
  * struct dog - structure
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  * Description: just a structure dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
