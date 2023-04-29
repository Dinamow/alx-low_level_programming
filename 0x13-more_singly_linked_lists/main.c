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
void free_listint(listint_t *head);


int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}

void free_listint(listint_t *head)
{
listint_t *node, *next_node;

if (!head)
    return;
node = head;
while (node)
{
    next_node = node->next;
    free(node);
    node = next_node;
}
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