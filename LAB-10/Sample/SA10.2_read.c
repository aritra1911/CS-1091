// WAP to read the contents of a text file given by user.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char filename[15];
    char ch;
    printf("\nEnter the filename to be opened:");
    scanf("%s", filename);
    /*Open the file for reading*/
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        return 1;
    }
    /*Read character by character from the file & display on computer screen*/
    while ((ch=fgetc(fp))!= EOF)
    {
        printf ("%c", ch);
    }
    fclose(fp);
    return 0;
}
