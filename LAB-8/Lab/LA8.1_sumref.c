// WAP to add two numbers using call by reference.
#include <stdio.h>

int sum(int*, int*, int*);

int main() {
    int x, y, s;
    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &x, &y);
    sum(&x, &y, &s);
    printf("Sum : %d\n", s);
    return 0;
}

int sum(int* m, int* n, int* s) { *s = *m + *n; }
