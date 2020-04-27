// WAP to swap n numbers in cyclic order stored in an dynamic array.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, n, t;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if ((a = malloc(sizeof(int) * n)) == NULL) {
        printf("Memory allocation unsuccessful.");
        return 1;
    }

    printf("Enter array elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    t = a[0];
    for (int i=0; i<n-1; i++)
        a[i] = a[i+1];
    a[n-1] = t;


    printf("Array after swap cycle:\n");
    for (int i=0; i<n; i++)
        printf("%d\n", a[i]);

    free(a);
    return 0;
}
