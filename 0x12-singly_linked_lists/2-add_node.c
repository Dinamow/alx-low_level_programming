#include "lists.h"

/**
 * add_node - start point
 * @head: input
 * @str: input
 * 
 * Return: size
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_head = malloc(sizeof(list_t));

    if (!head || !new_head)
        return (NULL);
    if (str)
    {
        new_head->str = strdub(str);
        if (!new_head->str)
        {
            free(new_head);
            return (NULL);
        }
        new_head->len = _strlen(new_head->str);
    }
    new_head->next = *head;
    *head = new_head;
    return (new_head);
}
