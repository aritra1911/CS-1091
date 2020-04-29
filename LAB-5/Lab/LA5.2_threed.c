// WAP to store max. 100 numbers into an array. Print all the elements that are
// three digit even integers.
#include <stdio.h>

int main() {
    int a[100], n;

    printf("Enter # of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\n");

    printf("All even 3 digit elements:\n");
    for (int i=0; i<n; i++)
        if (!(a[i] & 1) && ((a[i] / 1000 == 0) && (a[i] / 100 != 0)))
            printf("%d\n", a[i]);

    return 0;
}
