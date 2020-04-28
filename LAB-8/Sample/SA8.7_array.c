// WAP to store n elements in an array using dynamic memory allocation and print the elements using
// pointer.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, i,n;
    printf("\n\n Pointer : Store and retrieve elements from an array :\n");
    printf("--------------------------------------------------------------\n");
    printf("\nEnter the number of elements to store in the array :");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\nEnter %d number of elements:", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("\nThe elements you entered are :");
    for(i=0;i<n;i++)
    {
        printf("%d ", *(a+i));
    } return 0;
}
