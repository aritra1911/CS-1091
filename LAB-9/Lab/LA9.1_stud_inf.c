// WAP to store n student's information (i.e. student's roll no, name, gender,
// marks in 5 subjects etc) of an educational institute and display all the data
// with total marks of each student, using array of structure. If full mark of
// each subject is considered as 100 and pass mark as 40, then display the list
// of students failed in a particular subject.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SUBJECTS 5
#define NAME_LENGTH 30
#define PASSING_THRESHOLD 40

typedef struct {
    int roll_no;
    char name[NAME_LENGTH];
    char gender;
    int marks[SUBJECTS];
} Student;

int sum_marks(Student*);

int main() {
    int n, i=1;
    Student *first_student, *last_student, *student;

    printf("Enter no. of students: ");
    scanf("%d", &n);

    first_student = malloc(sizeof(Student) * n);
    last_student = first_student + n;

    // Get data
    for (student=first_student; student!=last_student; student++) {
        printf("Student #%d\n", i++);
        printf("----------\n");
        
        printf("Enter roll no.: ");
        scanf("%d", &student->roll_no);
        getchar();  // eat trailing newline char
        
        printf("Enter name: ");
        scanf("%[^\n]", student->name);
        getchar();  // eat trailing newline char
        
        printf("Specify gender (M/f): ");
        student->gender = tolower(getchar());
        getchar();  // eat trailing newline char
        
        for (int j=0; j<SUBJECTS; j++) {
            printf("Enter marks of subject #%d: ", j+1);
            scanf("%d", &student->marks[j]);
            getchar();  // eat trailing newline char
        }

        putchar('\n');
    }

    printf("List of students, and their details:\n");

    // Display data
    i = 1;
    for (student=first_student; student!=last_student; student++) {
        printf("\nStudent #%d\n", i++);
        printf("----------\n");
        printf("Roll No. : %d\n", student->roll_no);
        printf("Name : %s\n", student->name);
        printf("Gender : %s\n", (student->gender == 'f') ? "Female" : "Male");
        for (int j=0; j<SUBJECTS; j++)
            printf("Marks in subject #%d : %d\n", j+1, student->marks[j]);
        printf("Total marks : %d\n", sum_marks(student));
    }

    putchar('\n');

    // Display failures
    printf("List of failures\n");
    for (int j=0; j<SUBJECTS; j++)
        for (student=first_student; student!=last_student; student++)
            if (student->marks[j] < PASSING_THRESHOLD)
                printf(
                    "%s with roll no. %d, failed in subject #%d.\n",
                    student->name, student->roll_no, j+1
                );

    free(first_student);
}

int sum_marks(Student* student) {
    int sum = 0;

    for (int i=0; i<SUBJECTS; i++)
        sum += student->marks[i];

    return sum;
}
