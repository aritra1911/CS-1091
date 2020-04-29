// WAP to find centigrade for a given fahrenheit temperature.
#include <stdio.h>
int main()
{
    float f,c;
    printf("\nEnter a temperature in Fahrenheit scale=>");
    scanf("%f",&f);
    c=(f-32.0)/1.8;
    printf("\nThe equivalent temperature in celcious is %0.2f",c);
    return 0;
}
