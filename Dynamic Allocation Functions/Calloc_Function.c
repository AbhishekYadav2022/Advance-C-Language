#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Use of calloc ---> initializes with zero
    // Notes:-
    
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));
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
    return 0;
}