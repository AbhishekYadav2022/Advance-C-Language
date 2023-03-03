// C Program for implementing all the operations by linked list in queue
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void display();
void delete();

int main()
{
    int choice = 0;
    while (choice != 4)
    {
    start:
        printf("\n Main Menu\nPress 1 for insert\nPrint 2 for elete\nPress 3 for display\nPress 4 for exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            insert();
            break;
        }
        case 2:
        {
            delete ();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
            printf("Wrong Entry! Please Try Again.");
            goto start;
        }
        }
    }
    return 0;
}

void insert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("\n Enter the value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}