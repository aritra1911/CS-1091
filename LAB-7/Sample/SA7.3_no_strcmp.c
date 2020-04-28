// WAP to compare two strings without using
// library function for comparison operation.
#include<stdio.h>
#include<string.h>
int mystrcmp(char s1[], char s2[]);
int main()
{
    char s1[100], s2[100];
    printf("\nEnter first string : ");
    gets(s1);
    printf("\nEnter second string : ");
    gets(s2);
    if(mystrcmp(s1, s2)==0)
        printf("\nEntered strings are equal.");
    else
        printf("\nEntered strings are not equal.");
    return 0 ;
}

/*User defined function for comparison
 * operation*/
int mystrcmp(char s1[], char s2[])
{
    int i=0;
    while(s1[i]==s2[i])
    {
        if(s1[i]=='\0' || s2[i]=='\0')
            break;
        i++;
    }
    if(s1[i]=='\0' && s2[i]=='\0')
        return 0;
    else
        return 1;
}
