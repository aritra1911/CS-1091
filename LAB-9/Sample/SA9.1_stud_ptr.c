// WAP to store one student's information (i.e. student's roll no, name, gender,
// marks etc) of an educational institute and display all the data, using
// structure.
#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[25];
    char gender;
    float marks;
};

int main()
{
    struct student s, *ptr;
    ptr=&s;
    printf("\nEnter the students data:\n");
    printf("\nRoll Number: ");
    scanf("%d", &ptr->roll);
    getchar();
    printf("\nName: ");
    fgets(ptr->name, 25, stdin);
    printf("\nGender: ");
    scanf("%c", &ptr->gender);
    printf("\nMarks: ");
    scanf("%f", &ptr->marks);
    printf("\nThe students details are\n");
    printf("\nRoll number: %d",s.roll);
    printf("\nName:%s ", s.name);
    printf("\nGender:%c ", s.gender);
    printf("\nMarks: %.2f", s.marks);

    printf("\nThe students details are\n");
    printf("\nRoll number: %d",ptr->roll);
    printf("\nName:%s ", ptr->name);
    printf("\nGender:%c ", ptr->gender);
    printf("\nMarks: %.2f", ptr->marks);

    return 0;
}
