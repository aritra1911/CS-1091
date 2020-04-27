// WAP to display values in reverse order from an integer array using pointer.
#include <stdio.h>

#define MAX 100

void rev(int*, int);

int main() {
    int a[MAX], n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements into array:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    rev(a, n);
    printf("The reversed array:\n");
    for (int i=0; i<n; i++)
        printf("%d\n", a[i]);
    return 0;
}

void rev(int* a, int n) {
    for (int i=0; i<n/2; i++) {
        int t = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = t;
    }
}
