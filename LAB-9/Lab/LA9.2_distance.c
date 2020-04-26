// WAP to add two distances (in km-meter) using structures.

#include <stdio.h>

typedef struct {
    int km, m;
} Distance;

void get_distance(Distance*);
Distance add_distances(Distance*i, Distance*);
void show_distance(Distance*);

int main() {
    Distance dist1, dist2, result;

    printf("Enter distance #1:\n");
    get_distance(&dist1);
    putchar('\n');
    
    printf("Enter distance #2:\n");
    get_distance(&dist2);
    putchar('\n');

    result = add_distances(&dist1, &dist2);

    printf("Resultant distance:\n");
    show_distance(&result);

    return 0;
}

void show_distance(Distance* dist) {
    printf("km : %d\n", dist->km);
    printf("m : %d\n", dist->m);
}

void get_distance(Distance* dist) {
    printf("Enter km: ");
    scanf("%d", &dist->km);
    printf("Enter m: ");
    scanf("%d", &dist->m);
}

Distance add_distances(Distance* d1, Distance* d2) {
    Distance dist;
    int km = d1->km + d2->km;
    int m = d1->m + d2->m;
    dist.km = km + (m / 1000);
    dist.m = m % 100;
    return dist;
}
