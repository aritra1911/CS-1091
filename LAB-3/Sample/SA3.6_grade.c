// WAP to display the grade system of KIIT University based on total marks
// secured by a student in a semester. Assume marks are integer values. Use
// switch-case statement.
// The grade is calculated is as follows:
// Marks     Grade
// 90 to 100 O
// 80 to 89  E
// 70 to 79  A
// 60 to 69  B
// 50 to 59  C
// 40 to 49  D
// < 40      F
#include<stdio.h>
int main()
{
    int total_mark,tm;
    printf("\nEnter total mark secured by a student: ");
    scanf("%d",&total_mark);
    tm=total_mark/10;
    switch(tm)
    {
        case 9: printf("\nSecured grade is O");
                break;
        case 8: printf("\nSecured grade is E");
                break;
        case 7: printf("\nSecured grade is A");
                break;
        case 6: printf("\nSecured grade is B");
                break;
        case 5: printf("\nSecured grade is C");
                break;
        case 4: printf("\nSecured grade is D");
                break;
        default: printf("FAIL");
    } return 0;
}
