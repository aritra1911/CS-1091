// WAP to compute the power series (e to the power x). x 2 3 4
// e^x=1+x+\frac{x^2}{2!}+\frac{x^3}{3!}+\frac{x^4}{4!}+………..
#include <stdio.h>
#include <math.h>

double _exp(double, int);
unsigned long fact(int);

int main() {
    double x;
    int n;
    
    printf("Enter x: ");
    scanf("%lf", &x);
    
    printf("# of terms to include: ");
    scanf("%d", &n);
    
    printf("e^%lf = %lf\n", x, _exp(x, n));

    return 0;
}

double _exp(double x, int n) {
    double ex = 0.0;
    for(int i=0; i<n; i++)
        ex +=  pow(x, i) / fact(i);
    return ex;
}

unsigned long fact(int n) {
    if (n == 0) return 1L;
    return n * fact(n - 1);
}
