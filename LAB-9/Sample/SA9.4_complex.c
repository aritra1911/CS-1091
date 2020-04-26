// WAP to add two complex numbers by Passing structure to a function
#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
} complex;

complex add(complex,complex);
int main()
{
    complex c1, c2, c;
    printf("\nFor 1st complex number \n");
    printf("\nEnter real and imaginary part respectively:");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("\n\nFor 2nd complex number \n");
    printf("\nEnter real and imaginary part respectively:");
    scanf("%f %f", &c2.real, &c2.imag);
    c = add(c1, c2);
    printf("\n\nSum = %.1f + %.1fi", c.real, c.imag);
    return 0;
}

complex add(complex x, complex y)
{
    complex temp;
    temp.real = x.real + y.real;
    temp.imag = x.imag + y.imag;
    return(temp);
}
