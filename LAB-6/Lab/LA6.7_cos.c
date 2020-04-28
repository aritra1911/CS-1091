// WAP to compute the cosine series using function.
//     cos(x)=1-\frac{x^2}{2!}+\frac{x^4}{4!}-\frac{x^6}{6!}+...
#include <stdio.h>
#include <math.h>

int fact(int);

int main() {
    int n, sign;
    double x, s=0;
    printf("Enter argument: ");
    scanf("%lf", &x);
    printf("How many terms of approximation? ");
    scanf("%d", &n);

    putchar(getchar());

    for (int i=0; i<n; i++)
        s += pow(-1, i) * (pow(x, 2*i) / (double)fact(2*i));


    printf("cos(%lf) = %lf\n", x, s);

    return 0;
}

int fact(int n) {
    if (n == 0) return 1;
    return n*fact(n-1);
}
