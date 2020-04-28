// WAP to swap the values of two variables by using a suitable user defined
// function (say SWAP) for it.
#include <stdio.h>

void swap(int*, int*);

int main() {
    int a, b;
    printf("Enter a and b separated by space:\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}
