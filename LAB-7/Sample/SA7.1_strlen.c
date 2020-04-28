// Write a program to find the length of a string
// by using library function for getting length of
// the string.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int length;
    printf("\nEnter a string : ");
    gets(s);
    length = strlen(s);
    printf("\nLength of the String is : %d",
            length);
    return 0 ;
}
