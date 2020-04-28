// WAP to swap two numbers using call by reference.
#include <stdio.h>
int main()
{
    int num1,num2;
    void swap(int*, int*); //Function Prototype
    printf("\nEnter value of num1: ");
    scanf("%d",&num1);
    printf("\nEnter value of num2: ");
    scanf("%d",&num2);
    //print values before swapping
    printf("\nBefore Swapping: num1=%d, num2=%d\n",num1,num2);
    //call function by passing addresses of num1 and num2
    swap(&num1,&num2);
    //print values after swapping
    printf("\nAfter Swapping: num1=%d, num2=%d\n",num1,num2);
    return 0;
}
/*Function Definition: swap two numbers using call by reference*/
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *y = *x;
    *x = t;
}
