// WAP to print the following pattern for n rows. Ex. for n=5 rows
// 1
// 2 1
// 1 2 3
// 4 3 2 1
// 1 2 3 4 5
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        if (i&1)
            for (int j=1; j<=i; j++)
                printf("%d ", j);
        else
            for (int j=i; j>=1; j--)
                printf("%d ", j);
        printf("\n");
    }

    return 0;
}
