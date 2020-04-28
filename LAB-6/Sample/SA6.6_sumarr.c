// WAP to design a user defined function (say SUM_ARRAY) to calculate the sum of all the integers
// stored in the array.
#include<stdio.h>
int SUM_ARRAY(int a[],int); //Function Prototype
int main()
{
    int a[100], n, i;
    printf("\nEnter how many numbers :");
    scanf("%d",&n);
    printf("\nEnter data for array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nThe sum of the elements of the array is %d", SUM_ARRAY(a, n));
    return 0;
}
/*User Defined Function SUM_ARRAY*/
int SUM_ARRAY(int a[], int n)
{
    int i, sum=0;
    for(i=0; i<n; i++)
    {
        sum=sum + a[i];
    }
    return sum;
}
