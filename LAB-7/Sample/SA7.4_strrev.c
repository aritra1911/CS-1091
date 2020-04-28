// WAP to find the reverse of a string by using library function for reverse operation.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("\nEnter a string : ");
    gets(s);
    printf("\nThe reverse of the string is %s ", strrev(s));
    puts(s);
    return 0 ;
}
