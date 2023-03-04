// Circular Singly Linked List
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head;

void beginInsert();
void lastInsert();
void randomInsert();
void beginDelete();
void lastDelete();
void randomDelete();
void display();
void search();

int main()
{
    int choice = 0;
    while (choice != 7)
    {
    start:
        printf("\n Main Menu");
        printf("\nEnter 1 for begin insert");
        printf("\nEnter 2 for last insert");
        printf("\nEnter 3 for begin delete");
        printf("\nEnter 4 for last delete");
        printf("\nEnter 5 for search");
        printf("\nEnter 6 for display");
        printf("\nEnter 7 for exit");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            beginInsert();
            break;
        }
        case 2:
        {
            lastInsert();
            break;
        }
        case 3:
        {
            beginDelete();
            break;
        }
        case 4:
        {
            lastDelete();
            break;
        }
        case 5:
        {
            search();
            break;
        }
        case 6:
        {
            display();
            break;
        }
        case 7:
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

// Function for begin insert
void beginInsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("Enter the node data");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
                ptr->next;
                ptr->next = head;
                temp->next = ptr;
                head = ptr;
            }
        }
        printf("\nNode inserted");
    }
}

void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter the value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }
        print("Node inserted");
    }
}

void beginDelete()
{
    struct node *ptr;
    if (head == NULL)
    {
        print("\nUnderflow");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("\nNode deleted");
    }
}

void lastDelete()
{
    struct node *ptr, *preptr;
    if (head == NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        printf("\nNode deleted");
    }
}

void search()
{
    struct node *ptr;
}