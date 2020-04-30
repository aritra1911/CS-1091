// WAP to add two times in hour, minitue & second format entered through the
// keyboard in the format hh:mm:ss
#include <stdio.h>

int main() {
    int hr0, min0, sec0, hr1, min1, sec1;

    printf("Enter time #1:\n");
    printf("Enter hr: ");
    scanf("%d", &hr0);
    printf("Enter min: ");
    scanf("%d", &min0);
    printf("Enter sec: ");
    scanf("%d", &sec0);
    putchar('\n');
    
    printf("Enter time #2:\n");
    printf("Enter hr: ");
    scanf("%d", &hr1);
    printf("Enter min: ");
    scanf("%d", &min1);
    printf("Enter sec: ");
    scanf("%d", &sec1);
    putchar('\n');

    int hr = hr0 + hr1;
    int min = min0 + min1;
    int sec = sec0 + sec1;
    if (sec >= 60) { min++; sec -= 60; }
    if (min >= 60) { hr++; min -= 60; }

    printf("Resultant time: %02d:%02d:%02d\n", hr, min, sec);

    return 0;
}
