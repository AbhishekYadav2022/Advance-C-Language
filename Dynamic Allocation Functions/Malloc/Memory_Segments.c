#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *numbers;
    int x;

    numbers = (int *)malloc(5 * sizeof(int));
    if (numbers == NULL)
    {
        printf("Can't allocate memory!");
    }
    else
    {
        numbers[0] = 100;
        numbers[1] = 200;
        numbers[2] = 300;
        numbers[3] = 400;
        numbers[4] = 500;
        printf("\nIndividual memory segments initialized to:\n");
        for (x = 0; x < 5; x++)
            printf("numbers[%d] = %d\n", x, numbers[x]);
    }

    return 0;
}