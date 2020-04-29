// WAP to find the standard deviation of a list of numbers.
#include <stdio.h>
#include <math.h>
#define MAX 100

int main() {
    int a[100], n;
    float sum = 0, mean;

    printf("Enter no. of elements: ");
    scanf("%d", &n);
    for (int i=0; i<n; scanf("%d", &a[i++]));

    for (int i=0; i<n; sum+=a[i++]);
    mean = sum / n;
    
    sum = 0;
    for (int i=0; i<n; sum+=pow((a[i++] - mean), 2));

    printf("\nStandard Deviation : %f\n", sqrt(sum / n));

    return 0;
}
