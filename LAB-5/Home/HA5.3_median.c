// WAP to find the median of a list of numbers.
#include <stdio.h>
#define MAX 100
int main() {
    int arr[MAX], n;

    do {
        printf("Enter number of elements: ");
        scanf("%d", &n);

        if (n > 100)
            printf("Please enter a size within 100 elements.\n");
    } while (n > 100);

    printf("\nEnter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] >= arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    float median = (n % 2 == 0) ? (arr[n/2] + arr[n/2-1]) / 2.0 : arr[n/2];
    printf("Median : %f\n", median);

    return 0;
}
