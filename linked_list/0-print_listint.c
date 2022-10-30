#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t nnodes = 0;
    int f;
    while (h)
    {
        f = h->n;
        printf("%d\n", f);
        h = h->next;
        nnodes++;
    }
    return (nnodes);
}


    /**
     * main - check the code
     *
     * Return: Always 0.
     
    int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %llu elements\n", n);
    free(new);
    return (0);
}
*/