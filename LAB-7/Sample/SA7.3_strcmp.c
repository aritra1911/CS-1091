// WAP to compare two strings by using library
// function for comparison operation.
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    printf("\nEnter first string : ");
    gets(s1);
    printf("\nEnter second string : ");
    gets(s2);
    if(strcmp(s1, s2)==0)
        printf("\nEntered strings are equal.");
    else
        printf("\nEntered strings are not equal.");
    return 0 ;
}
