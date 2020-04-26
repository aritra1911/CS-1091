// Write a menu driven program to perform the following operations in a file.
//     a) To delete a specific line from a text file.
//     b) To replace a specified line by another from a text file.

#include <stdio.h>

#define TEMP_FILE "temp.txt"
#define MAX_LINE_LENGTH 100

void alter_line(FILE*, FILE*, int, char*);

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Specify a file\n");
        return 1;
    }

    FILE *fp, *temp_fp;
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("%s could not be opened\n", argv[1]);
        return 1;
    }
    if ((temp_fp = fopen(TEMP_FILE, "w")) == NULL) {
        printf("%s could not be opened\n", TEMP_FILE);
        fclose(fp);
        return 1;
    }

    int n, ch;
    printf("Enter line number: ");
    scanf("%d", &n);
    printf("\n1. Delete line #%d\n", n);
    printf("2. Edit line #%d\n", n);
    printf("Enter your choice: ");
    scanf("%d", &ch);

    char edited_line[MAX_LINE_LENGTH];
    switch (ch) {
        case 1:
            alter_line(fp, temp_fp, n, NULL);
            break;

        case 2:
            getchar();  // eat trailing newline char
            printf("Enter your text:\n");
            fgets(edited_line, MAX_LINE_LENGTH, stdin);
            alter_line(fp, temp_fp, n, edited_line);
            break;

        default:
            printf("Fuck You!\n");
    }

    fclose(fp);
    fclose(temp_fp);

    remove(argv[1]);
    rename(TEMP_FILE, argv[1]);

    return 0;
}

void alter_line(FILE* fp1, FILE* fp2, int n, char* edit_line) {
    char line[MAX_LINE_LENGTH];
    int i=1;
    while (fgets(line, MAX_LINE_LENGTH, fp1) != NULL) {
        if (i++ != n)
            fputs(line, fp2);
        else if (edit_line != NULL)
            fputs(edit_line, fp2);
    }
}
