// WAP to input any two integers, and provide a menu to the user to select any of
// the options as add, subtract, multiply, divide and display the result
// accordingly.
#include <stdio.h>

int main() {
    int a, b, ch;

    printf("Enter two numbers sepearated by space:\n");
    scanf("%d %d", &a, &b);

    printf("Select Menu\n");
    printf("===========\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("\nPlease enter an option: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("\nResult is %d\n", a + b);
            break;

        case 2:
            printf("\nResult is %d\n", a - b);
            break;

        case 3:
            printf("\nResult is %d\n", a * b);
            break;

        case 4:
            if (b == 0) {
                printf("\nSecond operand of division cannot be zero\n");
                return 1;
            }
            printf("\nResult is %d\n", a / b);
            break;

        default:
            printf("\nInvalid option\n");
            return 1;
   }

    return 0;
}
