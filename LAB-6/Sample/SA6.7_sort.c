// WAP to sort the elements of an array in ascending order by using a suitable function for sort operation.
#include<stdio.h>
void bubbleSort(int a[],int); //Function Ptototype
int main()
{
    int a[100], n, i;
    printf("\nEnter how many numbers :");
    scanf("%d",&n);
    printf("\nEnter data for array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubbleSort(a,n); //Function Call
    printf("\nThe Numbers in ascending order are:");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}
/*Bubble Sort Function*/
void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for(i=1; i<=n-1; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
