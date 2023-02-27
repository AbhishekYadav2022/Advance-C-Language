#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printData(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->next = *head_ref;
    new_node->data = new_data;

    (*head_ref) = new_node;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;

    second->data = 16;
    second->next = third;

    third->data = 65;
    third->next = NULL;

    printData(head);
    push(&head, 35);

    printf("New Data\n");
    printData(head);
    return 0;
}