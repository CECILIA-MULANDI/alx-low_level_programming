#ifndef DOG
#define DOG
/**
 * struct dog - use defined structure
 * @name: name
 * @age:age
 * @owner:owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
