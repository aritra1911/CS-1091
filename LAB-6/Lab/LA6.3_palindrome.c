// WAP to test whether a number n is palindrome number or not.
#include <stdio.h>

int is_palindrome(int);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d is ", n);
    if (!is_palindrome(n))
        printf("not ");
    printf("palindrome\n");
}

int is_palindrome(int n) {
    int m = n, rev = 0;
    while (n > 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    return rev == m;
}
