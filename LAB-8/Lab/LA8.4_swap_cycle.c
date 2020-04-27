// WAP to swap three numbers in cyclic order using Call by Reference. In other
// words, WAP that takes three variable (a, b, c) in as separate parameters and
// rotates the values stored so that value a goes to be, b, to c and c to a.
#include <stdio.h>

void swap(int*, int*, int*);

int main() {
    int a, b, c;
    printf("Enter numbers to be swapped separated by a space:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf(
        "Value of a, b, c before swapping are %d, %d, %d, respectively.\n",
        a, b, c
    );
    swap(&a, &b, &c);
    printf(
        "Value of a, b, c after swapping are %d, %d, %d, respectively.\n",
        a, b, c
    );
    return 0;
}

void swap(int* a, int* b, int* c) {
    int t = *a;
    *a = *b;
    *b = *c;
    *c = t;
}
