// WAP to read roll number, name, gender and marks data of n number of students
// from user and store them in a file. If the file previously exits, add the
// information of n students.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SUBJECTS 5
#define NAME_LENGTH 30
#define DATA_FILE_NAME "students.txt"

typedef struct {
    int roll_no;
    char name[NAME_LENGTH];
    char gender;
    int marks[SUBJECTS];
} Student;

void write_student(Student*, FILE*);

int main() {
    int n, i=1;
    FILE* fp;
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

    //  Write to file
    if((fp = fopen(DATA_FILE_NAME, "a")) == NULL) {
        printf("File could not be opened\n");
        return 1;
    }
    for (student=first_student; student!=last_student; student++)
        write_student(student, fp);
    fclose(fp);

    printf("Student(s) appended to %s.\n", DATA_FILE_NAME);

    free(first_student);

    return 0;
}

void write_student(Student* stud, FILE* fp) {
    fprintf(fp, "%d;%s;%c;%d;%d;%d;%d,%d\n",
        stud->roll_no, stud->name, stud->gender,
        stud->marks[0], stud->marks[1], stud->marks[2],
        stud->marks[3], stud->marks[4]
    );
}
