// WAP to display the array elements in reverse order.
#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter # of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nIn reverse:\n");
    for (int i=n-1; i>=0; i--)
        printf("%d\n", arr[i]);

    return 0;
}
