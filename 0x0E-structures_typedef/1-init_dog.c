#include "dog.h"

/**
*init_dog - initializes variable d
*@d: variable initialized
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*Return: notin
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
