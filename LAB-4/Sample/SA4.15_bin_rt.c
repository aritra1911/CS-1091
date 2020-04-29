// WAP to print the following pattern for n rows. Ex. for n=6 rows
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// 0 1 0 1 0 1
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter The Number Of Rows =>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%4d",(i+j+1)%2);
        printf("\n");
    } return 0;
}
