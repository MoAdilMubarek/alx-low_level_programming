#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d-name : "(nil)");
		printf("Age: %d\n", d->age ? d->age : "(nil)");
		printf("Owner: %d\n", d-owner ? d->owner : "(nil)");
	}
}
