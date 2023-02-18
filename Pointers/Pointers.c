// Pointer in C
#include <stdio.h>
int main()
{

    // 1.:.:.:.:.:.:.>
    // int m;
    // int *n;
    // n = &m;
    // printf("Enter a number: ");
    // scanf("%d", n);
    // printf("You entered %d", m);
    // printf("Address of %d is %p", m, m);

    // 2.:.:.:.:.:.:.>
    // int x = 99;
    // int *p1, *p2;
    // p1 = &x;
    // p2 = p1;
    // /* print the value of x twice */
    // printf("Values at p1 and p2: %d %d\n", *p1, *p2);
    // /* print the address of x twice */
    // printf("Addresses pointed to by p1 and p2: %p %p", p1, p2);

    // 3.:.:.:.:.:.:.> 
    // Pointer Conversions
    // double x = 100.1, y;
    // int *p;
    // /* The next statement causes p (which is an
    // integer pointer) to point to a double. */
    // p = (int *) &x;
    // /* The next statement does not operate as expected. */
    // y = *p; /* attempt to assign y the value x through p */
    //         /* The following statement won't output 100.1. */
    // printf("The (incorrect) value of x is: %f", y);

    // 4.:.:.:.:.:.:.>
    char *ch = (char *)3000;
    int *i = (int *)3000;
    printf("The address of char pointer is %p\n: ", ch);
    printf("Value at address ch is %d", ch);
    
    // 5.:.:.:.:.:.:.>

    return 0;
}