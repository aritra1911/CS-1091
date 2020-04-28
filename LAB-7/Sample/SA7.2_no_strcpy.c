// WAP to copy one string into other without
// using a library function for copy operation.
#include<stdio.h>
#include<string.h>
void mystrcpy(char ns[], char os[]);
int main()
{
    char s[100], d[100];
    printf("\nEnter a string : ");
    gets(s);
    mystrcpy(d, s);
    printf("\nSourse String is ");
    puts(s);
    printf("\Destination String is ");
    puts(d);
    return 0 ;
}
void mystrcpy(char ns[], char os[])
{
    int i=0;
    while(os[i]!='\0')
    {
        ns[i]=os[i];
        i++;
    }
    ns[i]='\0';
}
