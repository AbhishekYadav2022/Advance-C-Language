#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Use of malloc ---> initializes with garbage value
    // Notes:-
    // 1. It doesn't initialize memory at execution time, so it has garbage value initially.
    // 2. It returns NULL if memory is not sufficient.

    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int)); // The pointer ptr holds the address of the first byte in the allocated memory.
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        for (int i = 0; i < 3; i++)
        {
            printf("Enter the value no %d of this array: ", i);
            scanf("%d", &ptr[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            printf("The value at %d of this array: ", i);
            printf("%d\n", ptr[i]);
        }
    }
    return 0;
}