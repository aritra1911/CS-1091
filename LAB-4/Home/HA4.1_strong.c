// WAP to check whether an input integer is strong number or not.
// (Hint: If the sum of factorials of all digits of a number are equal to the
// number are equal to the number, it is called a strong number )
#include <stdio.h>

int main() {
    int m, n, s=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    m = n;
    
    while (n > 0) {
        int r = n % 10, f = 1;
        for (int i=2; i<=r; i++) f *= i;
        s += f;
        n /= 10;
    }

    if (m == s) printf("Strong Number!\n");
    else printf("Not a strong number.\n");

    return 0;
}
