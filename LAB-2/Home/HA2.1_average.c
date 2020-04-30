// WAP to find the average mark of 5 subjects of a student and find the
// percentage. Assume full mark of each subject is 100.
#include <stdio.h>

#define FULL_MARKS 100

int main() {
    float m1, m2, m3, m4, m5, average, percentage;

    printf("Enter marks of 5 subjects separated by spaces:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate average
    average = (m1 + m2 + m3 + m4 + m5) / 5.0;
    percentage = (average / FULL_MARKS) * 100;

    printf("Average : %f\nPercentage : %.2f %%\n", average, percentage);

    return 0;
}
