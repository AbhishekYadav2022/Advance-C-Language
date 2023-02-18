#include <stdio.h>
#include <string.h>
int main()
{

    // 1.:.:.:.:.:
    // struct addr
    // {
    //     char name[30];
    //     char street[40];
    //     char city[20];
    //     char state[3];
    //     unsigned long int zip;
    // };

    // struct addr addr_info;

    // 2.:.:.:.:.:
    // struct addr
    // {
    //     char name[30];
    //     char street[40];
    //     char city[20];
    //     char state[3];
    //     unsigned long int zip;
    // } addr_info, binfo, cinfo;

    // 3.:.:.:.:.:
    // struct
    // {
    //     char name[30];
    //     char street[40];
    //     char city[20];
    //     char state[3];
    //     unsigned long int zip;
    // } addr_info;

    // 4.:.:.:.:.:
    struct book
    {
        char name[20];
        float price;
        int pages;
    };

    struct book b1, b2, b3;

    // printf ( "\nEnter names, prices & no. of pages of 3 books\n" ) ;
    // scanf("%s%f%d",b1.name, &b1.price, &b1.pages);
    // scanf("%s%f%d",b2.name, &b2.price, &b2.pages);
    // scanf("%s%f%d",b3.name, &b3.price, &b3.pages);

    // printf("And this is what you entered\n");    
    // printf("Book Name: %s, Price(Rs.): %f, Pages: %d\n",b1.name, b1.price, b1.pages);
    // printf("Book Name: %s, Price(Rs.): %f, Pages: %d\n",b2.name, b2.price, b2.pages);
    // printf("Book Name: %s, Price(Rs.): %f, Pages: %d\n",b3.name, b3.price, b3.pages);   

    // 5.:.:.:.:.: 
    struct book b4 = {"Basic", 130.00, 550};
    struct book b5 = {"Physics", 150.80, 480};
    printf("Name of first book is %s\n", b4.name);
    printf("Price of second book %f\n", b5.price); 

    // 6.:.:.:.:.: 
    

    return 0;
}