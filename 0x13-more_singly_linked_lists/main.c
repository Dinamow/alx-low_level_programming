#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *ptr = malloc(sizeof(listint_t));
    listint_t *node = *head;

    if (!ptr || !head)
        return (NULL);
    ptr->n = n;
    if (node)
    {
    while (node->next)
        node = node->next;

    node->next = ptr; 
    }
    else
    *head = ptr;
    ptr->next = NULL;

    return (ptr);
}
    

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *ptr = malloc(sizeof(listint_t));
    if (!head || !ptr)
        return (NULL);
    
    ptr->n = n;
    ptr->next = *head;
    *head = ptr;
    return (ptr);
}

size_t print_listint(const listint_t *h)
{
    size_t i = 0;
    if (!h)
    {
        return 0;
    }
    while (h)
    {
        printf("%d\n", h->n);
        i++;
        h = h->next;
    }
    return (i);
}