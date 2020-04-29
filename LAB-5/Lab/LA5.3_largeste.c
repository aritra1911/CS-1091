// WAP to find out the largest even integer stored in the array of n integers. n
// is the user input.
#include <stdio.h>

int main() {
    int a[100], n;

    printf("Enter # of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\n");

    int largest=a[0], flag=0;

    for (int i=0; i<n; i++)
        if (!(a[i] & 1)) {
            if (!flag) flag = 1;
            if (a[i] > largest) largest = a[i];
        }
    
    if (flag)
        printf("Largest even element : %d\n", largest);
    else
        printf("No even elements found!");

    return 0;
}
