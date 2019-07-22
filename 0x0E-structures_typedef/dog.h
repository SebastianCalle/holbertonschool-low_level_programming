#ifndef DOG
#define DOG
/**
 * struct dog - include name age and owner
 * @name: the name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *my_dog(char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
