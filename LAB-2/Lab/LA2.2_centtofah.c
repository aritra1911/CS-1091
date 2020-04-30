// WAP to convert temperature from centigrade to Fahrenheit scale.
#include <stdio.h>

int main() {
    float f, c;
    
    printf("Enter Temperature in degree Centigrade: ");
    scanf("%f", &c);

    f = 1.8 * c + 32;

    printf("Equivalent Temperature in degree Fahrenheit : %f\n", f);

    return 0;
}
