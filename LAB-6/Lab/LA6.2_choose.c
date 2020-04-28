// WAP to find out n c r factor by using a user defined function for factorial
// (say fact).
#include <stdio.h>

int fact(int);

int main() {
    int n, r;
    printf("Enter n and r seperated by a space:\n");
    scanf("%d %d", &n, &r);
    if (n >= r)
        printf("n choose r = %d\n", fact(n)/(fact(n-r)*fact(r)));
    else {
        printf("You cannot choose more elements th");
        printf("an the total number of elements.\n");
    }
}

int fact(int n) {
    if (n == 0) return 1;
    return n*fact(n-1);
}
