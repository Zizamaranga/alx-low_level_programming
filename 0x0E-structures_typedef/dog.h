#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */


