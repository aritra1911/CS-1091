// WAP to find the roots of a quadratic equation ax 2 +bx+c=0 using switch-case
// statement.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2, real, imag;
    int s;

    printf("Enter values of a, b, and c separated by spaces:\n");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d>0) s = 1;
    else if (d<0) s = -1;

    switch (s) {
        case 0:
            r1 = (-b + sqrt(d)) / (2.0*a);
            printf("Root : %f\n", r1);
            break;

        case 1:
            r1 = (-b + sqrt(d)) / (2.0*a);
            r2 = (-b - sqrt(d)) / (2.0*a);
            printf("Roots : %f, %f\n", r1, r2);
            break;

        case -1:
            real = -b / (2.0*a);
            imag = sqrt(-d) / (2.0*a);
            printf("Roots : %f+%fi, %f-%fi\n", real, imag, real, imag);
    }

    return 0;
}
