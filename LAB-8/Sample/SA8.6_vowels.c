// WAP to count vowels in a string using pointer.
#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int nov;
    printf("\nEnter a string: ");
    gets(str);
    //assign address of s to ptr
    ptr=str;
    nov=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a'
        ||*ptr=='e' ||*ptr=='i' ||*ptr=='o'
        ||*ptr=='u')
        nov++;
        //increase the pointer, to point next character
        ptr++;
    }
    printf("\nTotal number of VOWELS: %d", nov);
    return 0;
}
