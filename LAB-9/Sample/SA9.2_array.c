// WAP to store n student's information (i.e. student's roll no, name, gender,
// marks etc) of an educational institute and display all the data, using array
// of structure.
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
    struct student s[100];
    int i,n;
    printf("\nEnter number of students:");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        printf("\n\nEnter student-%d data:\n", i+1);
        printf("\nRoll Number: ");
        scanf("%d", &s[i].roll);
        getchar();
        printf("\nName: ");
        fgets(s[i].name, 25, stdin);
        printf("\nGender: ");
        scanf("%c", &s[i].gender);
        printf("\nMarks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nThe student details are\n");
    printf("\nSl.No.\tRoll No.\tName\t\tGender\tMarks\n");
    printf("\n====\t=======\t====\t\t=====\t=====\n");
    for(i=0; i<=n; i++)
    {
        printf("\n%d\t%d\t%s\t%c\t%f", i+1, s[i].roll, s[i].name, s[i].gender, s[i].marks);
    }
    return 0;
}
