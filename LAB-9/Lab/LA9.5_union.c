// WAP to declare an union named as ABC having three members a, b and c as
// character, integer and double respectively. Assign user entered values to
// these members respectively one by one and display these values immediately.
// Again assign these user entered values to a, b, c one by one all together and
// display these values at last. Find the difference.

#include <stdio.h>

typedef union {
    char a;
    int b;
    double c;
} ABC;

int main() {
    ABC test;
    char a;
    int b;
    double c;

    // Input one-by-one, print immediately
    printf("Enter value of a: ");
    scanf("%c", &a);
    test.a = a;
    printf("Value of a: %c\n", test.a);

    printf("Enter value of b: ");
    scanf("%d", &b);
    test.b = b;
    printf("Value of b: %d\n", test.b);
    
    printf("Enter value of c: ");
    scanf("%lf", &c);
    test.c = c;
    printf("Value of c: %f\n", test.c);

    putchar('\n');

    // Assign all at once
    test.a = a;
    test.b = b;
    test.c = c;
    // And print at last
    printf("Value of a: %c\n", test.a);
    printf("Value of b: %d\n", test.b);
    printf("Value of c: %f\n", test.c);
}
