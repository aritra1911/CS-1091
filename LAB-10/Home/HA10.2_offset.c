// WAP to copy the specified bytes from given offset of a file and write them
// into another file.

#include <stdio.h>

void copy(FILE*, FILE*, int, int);

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("Usage: app <source_file> <destination_file>\n");
        return 1;
    }

    FILE *fp1, *fp2;
    int offset, bytes;

    if ((fp1 = fopen(argv[1], "r")) == NULL) {
        printf("%s could not be opened\n", argv[1]);
        return 1;
    }
    if ((fp2 = fopen(argv[2], "w")) == NULL) {
        printf("%s could not be opened\n", argv[2]);
        return 1;
    }

    printf("Enter offset: ");
    scanf("%d", &offset);
    printf("Enter no. of bytes: ");
    scanf("%d", &bytes);

    copy(fp1, fp2, offset, bytes);

    fclose(fp1);
    fclose(fp2);

    return 0;
}

void copy(FILE* fp1, FILE* fp2, int offset, int bytes) {
    int c;
    fseek(fp1, offset, 1);
    while((c = fgetc(fp1)) != EOF && bytes--)
        fputc(c, fp2);
}
