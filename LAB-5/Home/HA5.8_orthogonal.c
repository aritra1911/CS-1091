// WAP to check whether a given matrix is orthogonal or not.
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], n;

    do {
        printf("Enter dimensions of matrix:\n");
        scanf("%d", &n);
        if (n > 10)
            printf("Please enter a dimension within 10.\n");
    } while (n > 10);

    printf("\nEnter elements:\n");
    for (int i=0; i<n; i++) {
        printf("Row %d\n", i);
        for (int j=0; j<n; j++) {
            printf("Column %d: ", j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // Transpose
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            b[j][i] = a[i][j];

    // Multiply
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) {
            c[i][j] = 0;
            for (int k=0; k<n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    // Identity?
    int flag = 0;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            if ((i == j && c[i][j] != 1) || (i != j && c[i][j] != 0))
                { flag = 1; break; }

    if (!flag)
        printf("Orthogonal matrix\n");
    else
        printf("Not orthogonal matrix\n");

    return 0;
}
