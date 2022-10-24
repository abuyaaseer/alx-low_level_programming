#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints a struct dog
*@d: initialized to struct dog
*Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("name: (Nil)\n");
		else
			printf("%s\n", d->name);

			printf("%f\n", d->age);

		if (!(d->owner))
			printf("owner: (Nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
