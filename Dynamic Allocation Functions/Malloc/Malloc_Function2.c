#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *name;
    name = (char *)malloc(80 * sizeof(char));
    if (name == NULL)
    {
        printf("Out of memory!\n");
    }
    else
    {
        printf("Memory allocated.\n");
    }

    return 0;
}