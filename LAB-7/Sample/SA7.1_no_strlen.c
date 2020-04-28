// Write a program to find the length of a string
// without using library function for getting
// length of the string.
#include<stdio.h>
int main()
{
    char s[100];
    int length;
    printf("\nEnter a string : ");
    gets(s);
    length = 0; // Initial Length
    while(s[length]!='\0')
        length++;
    printf("\nLength of the String is : %d",length);
    return 0 ;
}
