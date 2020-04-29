// WAP to find the first n numbers of a Fibonacci sequence.
#include<stdio.h>
int main()
{
    int n,i,f1=0,f2=1,f;
    printf("\nEnter the number of terms :");
    scanf("%d",&n);
    printf("\nThe fibbonacci series generated is :\n");
    printf("%d %d ",f1,f2);
    for(i=1;i<=n-2;i++)
    {
        f=f1+f2;
        printf("%d ",f);
        f1=f2;
        f2=f;
    } return 0;
}
