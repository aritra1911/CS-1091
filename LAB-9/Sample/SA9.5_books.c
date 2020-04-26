// WAP to store n books data such as title, author, pulication, price etc using
// structures with dynamically memory allocation. Display all the books
// information of a particular author.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct book
{
    char title[25];
    char author[25];
    char publication[25];
    float price;
};

int main()
{
    struct book *b;
    int i,n, sl=1;
    char auth[25];
    printf("\nEnter number of books:");
    scanf("%d", &n);
    getchar();
    b=(struct book *)malloc(n*sizeof(struct book));
    for(i=0; i<n; i++)
    {
        printf("\n\nEnter book-%d data:\n", i+1);
        printf("\nTitle: ");
        fgets(b[i].title, 25, stdin);
        printf("\nAuthor: ");
        fgets(b[i].author, 25, stdin);
        printf("\nPublication: ");
        fgets(b[i].publication, 25, stdin);
        printf("\nPrice: ");
        scanf("%f", &b[i].price);
        getchar();
    }
    printf("\nEnter the author's name:");
    fgets(auth, 25, stdin);
    printf("\nThe books information of author %s are\n", auth);
    printf("\nSl.No.\tTitle\t\tPublication\tPrice\n");
    printf("\n====\t\t===\t\t========\t\t===n");
    for(i=0; i<n; i++)
    {
        if(strcmp(b[i].author, auth)==0)
            printf("\n%d\t%s\t\t%s\t\t%f", sl++, b[i].title, b[i].publication, b[i].price);
    }
    return 0;
};
