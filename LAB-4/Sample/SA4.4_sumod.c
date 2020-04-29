// WAP to calculate the sum of digits of a given number.
#include<stdio.h>
int main()
{
    int n,i,sum=0,d,num;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("\nSum of digits of the number %d is = %d",num,sum);
    return 0;
}
