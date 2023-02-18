#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *name;
    name = (char *)malloc(80 * sizeof(char));
    if (name != NULL)
    {
        printf("Enter your name: ");
        gets(name);
        printf("Hi! %s\n", name);
    }
    else
    {
        printf("Insufficent memory.\n");
    }
    free(name); // free memory resources
    printf("Memory Freed!");
    return 0;
}