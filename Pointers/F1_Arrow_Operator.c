#include <stdio.h>
int main()
{
    struct student
    {
        char name[25];
        int age;
    };

    // Creating instance
    struct student abhi = {"Abhishek", 19};

    // Printing
    printf("Name = %s, Age = %d\n", abhi.name, abhi.age);

    struct student *ptr; // Creating pointer of type struct

    // Changing age property using pointer
    ptr = &abhi;
    (*ptr).age = 20;

    // Printing again
    printf("Name = %s, Age = %d\n", abhi.name, abhi.age);

    // Changing age property using arrow operator/structure pointer
    ptr->age = 19;

    // Printing once again
    printf("Name = %s, Age = %d\n", abhi.name, abhi.age);

    return 0;
}