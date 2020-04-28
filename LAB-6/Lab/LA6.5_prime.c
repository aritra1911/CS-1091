// WAP to generate all the prime numbers between 1 and n by using a user defined
// function (say isPRIME) to be used for prime number testing, where n is a value
// supplied by the user.
#include <stdio.h>
#include <math.h>

int is_prime(int);

int main() {
    int n, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(is_prime(n))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}

int is_prime(int n) {
    if (n == 1)
        return 0;  // exception for 1 being a non-prime
    
    for(int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;

    return 1;
}
