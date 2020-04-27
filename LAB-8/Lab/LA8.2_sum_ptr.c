// WAP to compute the sum of all elements in an array using pointer.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, n, sum=0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if ((a = malloc(sizeof(int) * n)) == NULL) {
        printf("Memory allocation unsuccessful.");
        return 1;
    }

    printf("Enter array elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", a + i);

    for (int i=0; i<n; i++)
        sum += *a++;

    printf("\nSum is %d\n", sum);

    return 0;
}
