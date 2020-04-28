// WAP to add two numbers using pointers.
/*By using ordinary variables to store two
 * numbers and pointers*/
#include <stdio.h>
int main()
{
    int a, b, *x, *y, sum;
    printf("\nEnter two integers to add:");
    scanf("%d%d", &a, &b);
    x = &a;
    y = &b;
    sum = *x + *y;
    printf("\nSum of %d and %d is %d",a, b, sum);
    return 0;
}
