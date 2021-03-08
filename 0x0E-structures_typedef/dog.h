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
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
