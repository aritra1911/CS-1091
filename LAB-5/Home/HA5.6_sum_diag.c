#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX][MAX], m, n;
    printf("Enter row size and column size separated by a space:\n");
    scanf("%d %d", &m, &n);

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    int min_dim = (m > n) ? n : m, sum = 0;

    for (int i=0; i<min_dim; i++)
        sum += a[i][i] + ((min_dim-i-1 == i) ? 0 : a[min_dim-i-1][i]);

    printf("\nSum : %d\n", sum);

}
