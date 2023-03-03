// Insertion after a node
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

void insert

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)(malloc(sizeof(struct Node)));
    second = (struct Node *)(malloc(sizeof(struct Node)));
    third = (struct Node *)(malloc(sizeof(struct Node)));

    head -> data = 15;
    head -> next = second;

    second -> data = 25;
    second -> next = third;

    third -> data = 30;

    // printing data 
    printData(head);

    return 0;
}