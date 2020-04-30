// WAP to generate the pascal triangle pyramid of numbers for a given number.
// Ex. for number 4
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
#include <stdio.h>

int main() {
    int n;

    printf("Enter no. of rows: ");
    scanf("%d", &n);
    
    // Shamelessly copied from
    // https://www.geeksforgeeks.org/pascal-triangle/
    for (int line = 0; line <= n; line++)
    {
        for (int k=n-line; k>0; k--)
            printf(" ");

        int C = 1; // used to represent C(line, i)
        for (int i = 0; i <= line; i++)
        {
            printf("%d ", C); // The first value in a line is always 1
            C = C * (line - i) / (i + 1);
        }
        printf("\n");
    }

    return 0;
}
