#include <stdio.h>
#include <stdlib.h>

// Struct for creating nodes
struct Node
{
    int data;
    struct Node *next;
};

// Function to print the data of nodes
void printData(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

/* Given a reference (pointer to pointer) to the head of a list
   and an int,  inserts a new node on the front of the list. */
void push(struct Node **head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    /* 2. put in the data  */
    new_node->data = new_data;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

int main()
{
    // Pointers
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Dynamic Memory Alloction
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 15;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 25;
    third->next = NULL;

    // Printing the data of linked list
    printf("Data of linked list before insertion\n");
    printData(head);

    // Insertion 
    struct Node ** head_ref = &head; 

    push(head_ref, 100);

    // Printing the data of linked list again
    printf("Data of linked list after insertion\n");
    printData(head);

    return 0;
}