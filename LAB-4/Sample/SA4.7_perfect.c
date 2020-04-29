// WAP to check whether an input integer is perfect number or not.
/*(Hints: In mathematics, a perfect number is a positive integer that is the sum
 * of its proper positive
 * divisors, that is, the sum of the positive divisors excluding the number
 * itself. The first perfect number
 * is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 =
 * 6. The next perfect number is
 * 28 = 1 + 2 + 4 + 7 + 14. This is followed by the perfect numbers 496 and 8128
 * )*/
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\nEnter Any Number=>");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(n==sum)
        printf("\n%d is a perfect number",n);
    else
        printf("\n%d is not a perfect number",n);
    return 0;
}
