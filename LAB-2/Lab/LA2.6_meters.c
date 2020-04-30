// WAP to convert a quantity in meter entered through keyboard into its
// equivalent kilometer and meter as per the following format. Example. 2430
// meter = 2 Km and 430 meter.
#include <stdio.h>

int main() {
    int meters;
    
    printf("Enter distance in meters: ");
    scanf("%d", &meters);

    printf("Equivalent distance : %d km & %d m\n", meters / 1000, meters % 1000);

    return 0;
}
