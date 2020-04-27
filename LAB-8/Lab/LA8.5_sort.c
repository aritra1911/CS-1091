// WAP to sort an array using Pointer.
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void swap(int*, int*);

int main() {
    int *a, n;

    printf("Enter size of array: ");
    scanf("%d", &n);
    a = malloc(sizeof(int) * n);
    printf("Enter elements into array:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for (int i=0; i<n-1; i++)
        for (int j=0; j<n-i-1; j++)
            if (a[j] > a[j+1])
                swap(&a[j], &a[j+1]);

    printf("The sorted array:\n");
    for (int i=0; i<n; i++)
        printf("%d\n", a[i]);

    free(a);
    return 0;
}

void swap(int* c1, int* c2) { int c = *c1; *c1 = *c2; *c2 = c; }
