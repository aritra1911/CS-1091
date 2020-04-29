// WAP to find out the sum of the elements stored in a matrix.
#include <stdio.h>

int main() {
    int a[10][10], m, n, largest, second_largest;

    do {
        printf("Enter number of rows and columns separated by a space:\n");
        scanf("%d %d", &m, &n);
        if (m > 10 || n > 10)
            printf("Please enter a dimension within 10x10.\n");
    } while (m > 10 || n > 10);

    printf("\nEnter elements:\n");
    for (int i=0; i<m; i++) {
        printf("Row %d\n", i);
        for (int j=0; j<n; j++) {
            printf("Column %d: ", j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            sum+=a[i][j];

    printf("Sum is %d\n", sum);

    return 0;
}
