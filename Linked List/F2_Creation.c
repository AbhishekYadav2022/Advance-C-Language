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
    printData(head);

    return 0;
}