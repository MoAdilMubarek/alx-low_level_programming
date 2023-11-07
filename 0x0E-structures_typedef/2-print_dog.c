#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	else
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");
		printf("Age: %d\n", d->age ? d->age : "(nil)");
		printf("Owner: %d\n", d-owner ? d->owner : "(nil)");
	}
}
