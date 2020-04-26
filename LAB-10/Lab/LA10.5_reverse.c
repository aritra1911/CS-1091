// WAP to print the content of a file in reverse order.

#include <stdio.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Specify a file\n");
        return 1;
    }

    FILE* fp;
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("%s could not be opened\n", argv[1]);
        return 1;
    }

    fseek(fp, -1L, 2);  // go to the last character
    if (ftell(fp) < 1) return 0;
    while(ftell(fp)) {
        putchar(getc(fp));
        fseek(fp, -2L, 1);
    }
    putchar(getc(fp));

    fclose(fp);

    return 0;
}
