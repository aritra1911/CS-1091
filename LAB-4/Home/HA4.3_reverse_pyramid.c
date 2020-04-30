// WAP to form reverse pyramid of numbers for a given number. Ex. for number 4
// 1 2 3 4 3 2 1
//   1 2 3 2 1
//     1 2 1
//       1
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i=n; i>0; i--) {
        int j;
        for (int k=0; k<n-i; k++)
            printf("  ");
        for (j=1; j<=i; j++)
            printf("%d ", j);
        j--;
        while (--j > 0)
            printf("%d ", j);
        putchar('\n');
    }

    return 0;
}
