#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    listint_t *last_node = malloc(sizeof(listint_t));
    
    last_node = *head; /*set last node to the pointer thesame as *head->next*/

    new_node->n = n;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return (*head);
    }
    while (last_node->next != NULL) /*traverse to the last node*/
        last_node = last_node->next;
    
    last_node->next = new_node; /*set new node to last*/
    return (*head);
}

    /**
     * main - check the code
     *
     * Return: Always 0.
     *
    int main(void)
{
    listint_t *head;
    long unsigned int n;
    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    return (0);
}
*/