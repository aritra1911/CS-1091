// WAP to compute the sine series using function.
// Sin(x)=x-\frac{x3}{3!}+\frac{x5}{5!}-\frac{x7}{7!}+ ……..
#include<stdio.h>
#include<math.h>
long int fact(int);
int main()
{
    int n,i,p;
    float x, sum, term;
    printf("\nEnter no of terms:");
    scanf("%d",&n);
    printf("\nInput x :");
    scanf("%f",&x);
    //converstion of degree to radian
    x=x*3.1416/180;
    sum=0;p=-1;
    for(i=1; i<=n; i++)
    {
    p=p+2;
    term=pow(x,p)/fact(p);
    if(i%2==0)
    sum=sum-term;
    else
        sum=sum+term;
    }
    printf("\nSin(x) = %.4f", sum);
    return 0;
}
/*Factorial function*/
long int fact(int n)
{
    long int f=1;;
    int i;
    for (i=1; i<=n; i++)
        f=f*i;
    return (f);
}
