#ifndef DOG_H
#define DOG_h
/**
 * struct dog - start
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
*/
struct dog
{
    char *name;
    char *owner;
    float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
