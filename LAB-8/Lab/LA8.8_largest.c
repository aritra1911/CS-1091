// WAP to find the largest element stored in an array of n elements by using
// dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *bal, n, largest;
    printf("Enter size of array: ");
    scanf("%d", &n);
    bal = malloc(sizeof(int) * n);
    printf("Enter elements into array:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &bal[i]);
    largest = bal[0];
    for (int i=1; i<n; i++)
        if (bal[i] > largest) largest = bal[i];
    printf("Largest element : %d\n", largest);
    free(bal);
    return 0;
}
