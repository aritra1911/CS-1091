// WAP to find out the transpose of a given matrix.
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], m, n;

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

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            b[j][i] = a[i][j];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
