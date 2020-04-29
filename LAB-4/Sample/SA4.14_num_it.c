// WAP to form a pyramid of numbers for a given number. Ex. for number 4
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("\nEnter a number to form a pyramid=>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(k=1;k<=i;k++)
            printf("%d ",k);
        for(k=i-1;k>0;k--)
            printf("%d ",k);
        printf("\n");
    }
    return 0;
}
