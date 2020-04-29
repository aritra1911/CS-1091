// WAP to find out the sum of the numbers stored in an array of integers.
#include <stdio.h>
int main()
{
    int a[50],i,n, sum=0;
    printf("\nEnter how many numbers :");
    scanf("%d",&n);
    printf("\nEnter values for the array: ");
    for(i=0; i<n; i++) /* Stores number entered by user. */
        scanf("%d",&a[i]);
    /*code to find out sum of element in an array*/
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("\nThe sum of the elements stored in array a is %d", sum);
    return 0;
}
