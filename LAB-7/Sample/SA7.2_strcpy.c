// WAP to copy one string into other by using
// library function for copy operation.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], d[100];
    printf("\nEnter a string : ");
    gets(s);
    strcpy(d, s);
    printf("\nSourse String is ");
    puts(s);
    printf("\Destination String is ");
    puts(d);
    return 0 ;
}
