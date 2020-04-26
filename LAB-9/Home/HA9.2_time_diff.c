// WAP to calulate the difference between two time periods. Times are given in
// hr, min and sec.

#include <stdio.h>

typedef struct {
    int hr, min, sec;
} Time;

void get_time(Time*);
Time sub_times(Time*, Time*);
void show_time(Time*);

int main() {
    Time time1, time2, result;

    printf("Enter time #1:\n");
    get_time(&time1);
    putchar('\n');
    
    printf("Enter time #2:\n");
    get_time(&time2);
    putchar('\n');

    result = sub_times(&time1, &time2);

    printf("Resultant time:\n");
    show_time(&result);

    return 0;
}

void show_time(Time* time) {
    printf("hr : %d\n", time->hr);
    printf("min : %d\n", time->min);
    printf("sec : %d\n", time->sec);
}

void get_time(Time* time) {
    printf("Enter hr: ");
    scanf("%d", &time->hr);
    printf("Enter min: ");
    scanf("%d", &time->min);
    printf("Enter sec: ");
    scanf("%d", &time->sec);
}

Time sub_times(Time* t1, Time* t2) {
    int hr = t1->hr - t2->hr;
    int min = t1->min - t2->min;
    int sec = t1->sec - t2->sec;
    if (sec < 0) { min--; sec += 60; }
    if (min < 0) { hr--; min += 60; }
    return (Time) { hr, min, sec };
}
