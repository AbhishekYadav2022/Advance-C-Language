#include<stdio.h>
#include<string.h>
int main(){
    // 1.
    // Creating a string 
    // char name[] = { 'H', 'A', 'E', 'S', 'L', 'E', 'R', '\0' };
    // // First way to print 
    // printf("Name: ");
    // int i = 0;
    // while (i < 7)
    // {
    //     printf("%c", name[i]);
    //     i++;
    // }
    // Second way to print 
    // printf("Name is ");
    // i = 0;
    // while (name[i] != '\0')
    // {
    //     printf("%c", name[i]);
    //     i++;
    // }

    // 2.
    // char name[25];
    // printf("Enter your first name: ");
    // scanf("%s", name);
    // printf("Hello %s! how are you?", name);
    
    // 3.
    char name[25];
    printf("Enter you full name: ");
    gets(name); // The plus point with gets( ) is that it can receive a multi-word string. 
    puts("Hello!"); // puts( ) places the cursor on the next line
    puts(name); //puts( ) can display only one string at a time

    // 4.


    return 0;
}