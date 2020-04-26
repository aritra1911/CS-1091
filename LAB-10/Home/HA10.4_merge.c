// WAP to merge lines alternatively from two files & print the result.

#include <stdio.h>

#define MAX_LINE_LENGTH 100

void merge_files(FILE*, FILE*);

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("Usage: <file1> <file2>\n");
        return 1;
    }

    FILE *fp1, *fp2;
    if ((fp1 = fopen(argv[1], "r")) == NULL) {
        printf("%s could not be opened\n", argv[1]);
        return 1;
    }
    if ((fp2 = fopen(argv[2], "r")) == NULL) {
        printf("%s could not be opened\n", argv[2]);
        fclose(fp1);
        return 1;
    }

    merge_files(fp1, fp2);

    fclose(fp1);
    fclose(fp2);
    
    return 0;
}

void merge_files(FILE* fp1, FILE* fp2) {
    char line[MAX_LINE_LENGTH];
    int i=0, s1=1, s2=1;
    while (s1 || s2) {
        if (i = !i) {
            s1 = fgets(line, MAX_LINE_LENGTH, fp1) != NULL;
            if (s1) printf("%s", line);
        } else {
            s2 = fgets(line, MAX_LINE_LENGTH, fp2) != NULL;
            if (s2) printf("%s", line);
        }
    }
}
