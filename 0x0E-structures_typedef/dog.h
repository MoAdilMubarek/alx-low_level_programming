#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog struct
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 * Description: struct for a dog and nothing else or new
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

void free_dog(dog_t *d);
#endif
