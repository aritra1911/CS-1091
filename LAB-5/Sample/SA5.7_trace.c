// WAP to find the Trace(sum of the diagonal element) of a given mxn matrix.
#include <stdio.h>
int main()
{
    int a[10][10],i,j,n,sum=0;
    printf("\nEnter the order of the square matrix A :-");
    scanf("%d",&n);
    printf("\n Enter the order of the square matrix A\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<=n;j++)
            if(i==j)
                sum=sum+a[i][j];
    printf("\nsum of digonal values=%d",sum);
    return 0;
}
