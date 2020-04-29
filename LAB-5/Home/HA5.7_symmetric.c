// WAP to check whether a given matrix is symmetric or not.
#include <stdio.h>
#define MAX 10

int main() {
    int a[MAX][MAX], c[MAX][MAX], m, n;
    printf("Enter row size and column size separated by a space:\n");
    scanf("%d %d", &m, &n);

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            c[j][i] = a[i][j];

    int flag = 0;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            if (a[i][j] != c[i][j]) {
                flag = 1;
                goto outside;
            }

outside:
    if (!flag)
        printf("Symmetric matrix\n");
    else
        printf("Not symmetric matrix\n");
}
