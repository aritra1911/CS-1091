// WAP to print the following pattern for n rows. Ex. for n=5 rows
// A
// A B
// C B A
// D C B A
// E D C B A
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        for (int j=i; j>=0; j--)
            printf("%c ", 'A' + j);
        printf("\n");
    }

    return 0;
}
