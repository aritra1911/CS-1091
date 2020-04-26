// WAP to add two distances (in inch-feet) using structures.
#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
};

int main()
{
    struct Distance d1, d2, d;
    printf("\nEnter data for 1st distance\n");
    printf("\nEnter feet: ");
    scanf("%d", &d1.feet);
    printf("\nEnter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter data for 2nd distance\n");
    printf("\nEnter feet: ");
    scanf("%d", &d2.feet);
    printf("\nEnter inch: ");
    scanf("%f", &d2.inch);
    d.feet = d1.feet+d2.feet;
    d.inch = d1.inch+d2.inch;
    /*If inch is greater than 12, changing it to feet*/
    if (d.inch>12.0)
    {
        d.inch = d.inch-12.0;
        ++d.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"", d.feet, d.inch);
    return 0;
}
