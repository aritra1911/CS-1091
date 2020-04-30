// WAP to calculate area of a triangle whose three sides are given.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter three sides separated by spaces:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate Semi-Perimeter and Area
    s = (a + b + c) / 2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area : %.2f\n", area);

    return 0;
}
