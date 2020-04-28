// WAP to replace all occurrences of a character in a given string with a new character.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], och, nch;
    int i, flag=0;
    printf("\nEnter a string :");
    gets(s);
    printf("\nEnter a character :");
    scanf("%c", och);
    printf("\nEnter the new character :");
    scanf("%c", nch);
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]==och)
            {
                s[i]=nch;
                flag=1;
            }
        }
    if(flag==1)
        printf("\nAfter the replacement by new character, the string is %s", s);
    else
        printf("\nThe given string does not contain the character %c", och);
    return 0;
}
