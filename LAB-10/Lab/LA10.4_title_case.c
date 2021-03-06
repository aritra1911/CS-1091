// WAP to replace first letter of every word of the contents of a file with
// capital letter.

#include <stdio.h>
#include <ctype.h>

#define TEMP_FILE "temp.txt"

void title_case(FILE*, FILE*);

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
        return 1;
    }

    title_case(fp, temp_fp);

    fclose(fp);
    fclose(temp_fp);

    remove(argv[1]);
    rename(TEMP_FILE, argv[1]);

    return 0;
}

void title_case(FILE* fp1, FILE* fp2) {
    int c, prev_c=-1;
    while ((c = getc(fp1)) != EOF) {
        if (isspace(prev_c) || prev_c == -1)
            putc(toupper(c), fp2);
        else
            putc(c, fp2);
        prev_c = c;
    }
}
