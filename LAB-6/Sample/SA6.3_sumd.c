// WAP to find out the sum of digits of a number n by suing function. n is the
// user input.
#include <stdio.h>
int SUM_DIGIT(int); //Function Prototype
int main()
{
    int n, s;
    printf("\nEnter a number :");
    scanf("%d",&n);
    s=SUM_DIGIT(n);
    printf("\nThe sum of digits of %d is %d.", n, s);
    return 0;
}
/*User defined function to find out sum of digits of number n*/
int SUM_DIGIT(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
