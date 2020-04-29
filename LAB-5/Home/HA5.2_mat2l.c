// WAP to find out the second largest element stored in an array of 20 integers.
#include <stdio.h>

int main() {
    int a[20], largest, second_largest;

    printf("Enter elements:\n");
    for (int i=0; i<20; i++)
        scanf("%d", &a[i]);

    // Initialize both to the first element
    second_largest = largest = a[0];

    // Now search for them
    for (int i=0; i<20; i++)
        if (a[i] > largest) {
            second_largest = largest;
            largest = a[i];
        }

    printf("The second largest element is %d\n", second_largest);

    return 0;
}
