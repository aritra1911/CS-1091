// WAP to extract a substring of a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,j,n,l,pos;
    printf("\nEnter a string :");
    gets(s);
    l=strlen(s);
    printf("\nEnter the position of the sub-string:");
    scanf("%d", &pos);
    printf("\nEnter number of character to be extracted :");
    scanf("%d", &n);
    if(pos+n-1>l)
        printf("\nCan not be extracted! Becoz out of range!");
    else
    {
        printf("\nThe Substring is:\n");
        for(i=pos-1; i<pos+n-1; i++)
            printf("%c",s[i]);
    } return 0;
}
