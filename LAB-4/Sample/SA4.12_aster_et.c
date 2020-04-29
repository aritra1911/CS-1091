// WAP to print the following pattern for n rows. Ex. for n=5 rows
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("\nEnter how many rows =>");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
