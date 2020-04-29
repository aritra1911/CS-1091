// WAP to swap first element with last, second element with second last and so
// on, stored in an array.
#include <stdio.h>

int main() {
    int a[100], n;

    printf("Enter # of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\n");

    for (int i=0; i<n; i++) {
        if (n-i-1 <= i) break;
        int t = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = t;
    }
    
    for (int i=0; i<n; i++)
        printf("%d\n", a[i]);

    return 0;
}
