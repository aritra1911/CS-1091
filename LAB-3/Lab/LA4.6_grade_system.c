// WAP to display the grade system of KIIT University based on total marks
// secured by a student in a semester. Use else..if ladder statement.
#include <stdio.h>

int main() {
    float marks;
    int grade;

    printf("Enter marks out of 100: ");
    scanf("%f", &marks);

    if (marks >= 90 && marks <= 100)
        grade = 'O';
    else if (marks >= 80 && marks < 90)
        grade = 'E';
    else if (marks >= 70 && marks < 80)
        grade = 'A';
    else if (marks >= 60 && marks < 70)
        grade = 'B';
    else if (marks >= 50 && marks < 60)
        grade = 'C';
    else if (marks >= 40 && marks < 50)
        grade = 'D';
    else if (marks >= 0 && marks < 40)
        grade = 'F';
    else
        grade = -1;

    if (grade != -1)
        printf("Grade : %c\n", grade);
    else
        printf("Invalid entry for marks\n");

    return 0;
}
