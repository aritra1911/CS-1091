// WAP to count the number of characters, number of lines, blankspaces, tabs in a
// given text file.
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int nol=0,not=0,nob=0,noc=0;
    fp=fopen("aks.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;
        noc++;
        if(ch==' ') nob++;
        if(ch=='\n') nol++;
        if(ch=='\t') not++;
    }
    fclose(fp);
    printf("\n The no. of characters =%d",noc);
    printf("\n The no. of blanks =%d",nob);
    printf("\n The no. of tabs =%d",not);
    printf("\n The no. of lines =%d",nol);
    return 0;
}
