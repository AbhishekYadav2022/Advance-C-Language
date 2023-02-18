#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function to print the data of the nodes
void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // Creating three pointers for three nodes
    struct node *head;
    struct node *second;
    struct node *third;

    // Allocate memory for node in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // Link first and second nodes
    head->data = 15;
    head->next = second;

    // Link second and third nodes
    second->data = 20;
    second->next = third;

    // Terminate the list at the tird node
    third->data = 25;
    third->next = NULL;

    // Calling the function to print the data of the nodes
    LinkedListTraversal(head);
    return 0;
}