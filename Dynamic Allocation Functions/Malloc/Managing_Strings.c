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

    return 0;
}