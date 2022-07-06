#ifndef FILE_DOG
#define FILE_DOG
/**
 * struct dog - structure dog
 * @name: structure dog member
 * @age: structure dog member
 * @owner: structure dog member
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
