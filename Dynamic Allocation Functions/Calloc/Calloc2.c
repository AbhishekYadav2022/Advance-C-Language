#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *numbers;
    numbers = (int *)calloc(10, sizeof(int));
    if (numbers == NULL)
    {
        printf("Memory can not be allocated"); // return if calloc is not successful
    }
    else
    {
        printf("Memory allocated");
    }
    return 0;
}