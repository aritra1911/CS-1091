// WAP to arrange the numbers stored in the array so that it will display first
// all odd numbers, then even numbers.
#include <stdio.h>

int main() {
    int a[100], n, op;

    printf("Enter # of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\n");

    op = 0;
    for (int i=0; i<n; i++)
        if (a[i] & 1) {
            if (op != i) {
                int t = a[op];
                a[op] = a[i];
                a[i] = t;
            }
            op++;
        }
    
    for (int i=0; i<n; i++)
        printf("%d\n", a[i]);

    return 0;
}
