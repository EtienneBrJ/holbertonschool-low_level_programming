#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog information
 * @name: name
 * @owner: owner
 * @age: age
 *
 * Description: dog information
 **/
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - typedef struct dog
 **/

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
