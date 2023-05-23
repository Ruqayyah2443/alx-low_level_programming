#ifndef DOG_H
#define DOG_H


/**
* struct dog - print the features of a dog
* @name: Dog's name
* @age: Dog's age
* @owner: The owner's dog
*
* Description: Well explained description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);

#endif
