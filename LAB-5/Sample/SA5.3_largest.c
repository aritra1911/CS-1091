// Write a program to find largest element stored in an array.
#include <stdio.h>
int main()
{
    int a[50],i,n, large;
    printf("\nEnter how many numbers :");
    scanf("%d",&n);
    printf("\nEnter values for the array: ");
    for(i=0; i<n; i++) /* Stores number entered by user. */
        scanf("%d",&a[i]);
    /*code to find largest element in an array*/
    large=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>large)
            large=a[i];
    }
    printf("\nThe largest element stored in array a is %d", large);
    return 0;
}
