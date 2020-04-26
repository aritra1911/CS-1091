// WAP to compare contents of two files and display appropriate message.

#include <stdio.h>

int compare_files(FILE*, FILE*);

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("Not enough files to compare\n");
        return 1;
    }

    FILE *fp1, *fp2;
    if((fp1 = fopen(argv[1], "r")) == NULL) {
        printf("%s could not be opened\n", argv[1]);
        return 1;
    }
    if((fp2 = fopen(argv[2], "r")) == NULL) {
        printf("%s could not be opened\n", argv[2]);
        return 1;
    }

    if (compare_files(fp1, fp2))
        printf("Files are identical\n");
    else
        printf("File contents differ\n");

    fclose(fp2);
    fclose(fp1);

    return 0;
}

int compare_files(FILE* fp1, FILE* fp2) {
    int c1, c2;

    while ((c1 = getc(fp1)) != EOF) {
        c2 = getc(fp2);
        if (c2 == EOF || c2 != c1)
           return 0; 
    }

    return 1;
}
