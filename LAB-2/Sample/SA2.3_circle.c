// WAP to calculate area of a circle.
#include <stdio.h>
int main()
{
    float radius,area;
    printf("\nEnter the radius of a circle : ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("\nArea of Circle : %f",area);
    return 0;
}
