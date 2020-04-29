// WAP to perform the addition of two integers & display the result.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter two numbers to add :");
    scanf("%d%d",&a,&b);
    c = a + b;
    printf("\nThe addition of %d and %d is %d", a,b,c);
    return 0;
}
