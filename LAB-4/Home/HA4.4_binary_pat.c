// WAP to print the following pattern for n rows. Ex. for n=6 rows
// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0
// 1 0 1 0 1 0
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++)
            printf("%d ", (i + j) & 1);
        printf("\n");
    }

    return 0;
}
