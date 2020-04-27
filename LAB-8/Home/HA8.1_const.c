// WAP to change the value of constant integer using pointers.
#include <stdio.h>

int main() {
    const int a = 5;
    int* p = &a;
    printf("Value of `a` before changing: %d\n", a);
    *p = 101;
    printf("Value of `a` after changing: %d\n", a);
    return 0;
}
