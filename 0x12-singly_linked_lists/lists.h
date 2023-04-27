#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_t
{
    char* str;
    unsigned int len;
    struct list_t* next;
}list_t;

int _strlen(char* s);
size_t putchar(char name);
size_t print_list(const list_t *h);

#endif
