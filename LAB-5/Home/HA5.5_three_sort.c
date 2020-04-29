// WAP to sort 3 elements stored in an array without using any sorting
// algorithm.
#include <stdio.h>

int main() {
    int a[3];

    printf("Enter 3 elementt:");
    for (int i=0; i<3; i++)
        scanf("%d", &a[i]);
    
    int max_i = (a[0] > a[1]) ? ((a[0] > a[2]) ? 0 : 2) :
                                ((a[1] > a[2]) ? 1 : 2);
    if (max_i != 2) {
        int t = a[max_i];
        a[max_i] = a[2];
        a[2] = t;
    }
    max_i = (a[0] > a[1]) ? 0 : 1;
    if (max_i != 1) {
        int t = a[max_i];
        a[max_i] = a[1];
        a[1] = t;
    }

    printf("Sorted array:\n");
    for (int i=0; i<3; i++)
        printf("%d\n", a[i]);

    return 0;
}
