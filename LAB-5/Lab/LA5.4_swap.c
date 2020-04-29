// WAP to swap the pair of elements starting from beginning.
#include <stdio.h>

int main() {
    int a[100], n;

    printf("Enter # of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\n");

    for (int i=0; i<n; i+=2)
        if (i+1 != n) {
            int t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
        }
    
    for (int i=0; i<n; i++)
        printf("%d\n", a[i]);

    return 0;
}
