// WAP to calculate perimeter of a circle.
#include <stdio.h>
#define PI 3.1415926535897932384626

int main() {
    int radius;

    printf("Enter radius: ");
    scanf("%d", &radius);

    float circumference = 2 * PI * radius;

    printf("Perimeter = %f\n", circumference);

    return 0;
}
