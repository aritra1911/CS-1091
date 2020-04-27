// WAP to sort a list of names/strings alphabetically.
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str[MAX][MAX];
    int n;

    do {
        printf("Enter number of elements: ");
        scanf("%d", &n);

        if (n > 100)
            printf("Please enter a size within 100 elements.\n");
    } while (n > 100);

    printf("\nEnter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%s", str[i]);

    for (int i=0; i<n-1; i++)
        for (int j=0; j<n-i-1; j++)
            if (strcmp(str[j], str[j+1]) > 0) {
                char temp[MAX];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }

    printf("\nHere goes the sorted array:\n");

    for (int i=0; i<n; i++)
        printf("%s\n", str[i]);

    return 0;
}
