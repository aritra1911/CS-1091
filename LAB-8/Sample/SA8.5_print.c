//WAP to print a string using pointer.
#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    printf("\nEnter a string: ");
    gets(str);
    //assign address of str to ptr
    ptr=str;
    printf("\nEntered string is: ");
    while(*ptr!='\0')
    printf("%c",*ptr++);
    return 0;
}
