// WAP to create an array that can store max. 50 integers and display the
// contents of the array.
#include <stdio.h>
int main()
{
    int a[50],i,n;
    printf("\nEnter how many numbers :");
    scanf("%d",&n);
    printf("\nEnter values for the array: ");
    for(i=0; i<n; i++) /* Stores number entered by user. */
        scanf("%d",&a[i]);
    printf("\nThe elements are:");
    for(i=0; i<n; i++) /* Loop to print the numbers */
        printf("%d \t",a[i]);
    return 0;
}
