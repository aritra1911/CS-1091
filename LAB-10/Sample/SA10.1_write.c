// WAP to create a file & write some data in it.
#include <stdio.h>
int main()
{
    FILE *fp;
    int roll;
    char name[20];
    char gender;
    float marks;
    /* open for writing */
    fp=fopen("std.txt", "w");
    if (fp == NULL)
    {
        printf("\nCan not open the file");
        return 1;
    }
    printf("\nEnter one Student Details\n:");
    printf("\nRoll number of student:");
    scanf("%d", &roll);
    fprintf(fp, "\nRoll number of student= %d", roll);
    printf("\nName of student:");
    scanf("%s", name); getchar();
    fprintf(fp, "\nName of student= %s", name);
    printf("\nGender of student:");
    scanf("%c", &gender);
    fprintf(fp, "\nGender of student= %c", gender);
    printf("\nMarks of student: ");
    scanf("%f", &marks);
    fprintf(fp, "\nStudent Marks = %.2f\n", marks);
    fclose(fp);
    return 0;
}
