// WAP to print all numbers within a given range. The range is given by user.
#include<stdio.h>
int main()
{
    int min,max,i;
    printf("\nEnter minimum and maximum range:");
    scanf("%d%d",&min,&max);
    printf("\nThe number's are::\n");
    for(i=min;i<=max;i++)
    {
        printf("%d\t",i);
    } return 0;
}
