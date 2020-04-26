// WAP to convert all characters in uppercase of a given file.
#include <stdio.h>
#include <ctype.h>
int main()
{
    const char *filename="aks.txt";
    FILE *fp,*fp1;
    char ch;
    //open file in read mode
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("\nError in opening file.");
        return -1;
    }
    //create temp file
    fp1=fopen("temp.txt","w");
    if(fp1==NULL)
    {
        printf("\nError in creating temp file.");
        return -1;
    }
    /*read file from one file aks.txt and copy into another temp.txt in uppercase*/
    while((ch=fgetc(fp))!=EOF)
    {
        if(islower(ch))
        {
            ch=ch-32;
        }
        putc(ch,fp1);
    }
    fclose(fp);
    fclose(fp1);
    //rename temp.txt file to aks.txt
    rename("temp.txt","aks.txt");
    //remove temp file
    remove("temp.txt");
    /*now, print content of the file*/
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("\nError in opening file.");
        return -1;
    }
    printf("\nContent of file aks.txt");
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
