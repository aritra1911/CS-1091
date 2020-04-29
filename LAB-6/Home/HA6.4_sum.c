// WAP to find out the sum of n elements of an integer array a[] by using
// recursion.
#include <stdio.h>

#define MAX 100

int sum(int*, int, int);

int main() {
    int a[MAX], num;
    printf("Enter size of array:\n");
    scanf("%d", &num);
    printf("Enter array elements:\n");
    for(int i=0; i<num; i++)
        scanf("%d", a + i);
    printf("Sum = %d\n", sum(a, num-1, 0));
}

int sum(int* a, int n, int s) {
    if (n < 0) return s;
    return sum(a, n-1, s + a[n]);
}
