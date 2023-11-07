#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * struct dog - struct a dog
 * @d: pointer to struct
 * @name: pointer
 * @age: int
 * @owner: pointer
 * Description: function that initialize a variable of type struct dog
 */

struct dog
{
	char *name;
	float age;
	struct *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
