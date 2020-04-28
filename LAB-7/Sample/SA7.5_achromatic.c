// WAP to extract the first character of each word of a given string (Achromatic string).
#include <stdio.h>
#include <string.h>
int main()
{
    char os[100], ns[50];
    int i,j=0;
    printf("\nEnter a string :");
    gets(os);
    ns[j]=os[0];
    j++;
    for(i=0; os[i]!='\0'; i++)
    {
        if(os[i]==' ')
        {
            ns[j]=os[i+1];
            j++;
        }
    }
    ns[j]='\0';
    printf("\nThe required extracted string is %s", ns);
    return 0;
}
