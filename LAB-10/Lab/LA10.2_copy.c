// WAP to copy the contents of two files named as source1.txt and source2.txt
// into a third file

#include <stdio.h>

#define FIRST_FILE "source1.txt"
#define SECOND_FILE "source2.txt"
#define THIRD_FILE "source3.txt"

int main() {
    FILE *fp1, *fp2, *fp3;
    if((fp1 = fopen(FIRST_FILE, "r")) == NULL) {
        printf("%s could not be opened\n", FIRST_FILE);
        return 1;
    }
    if((fp2 = fopen(SECOND_FILE, "r")) == NULL) {
        printf("%s could not be opened\n", SECOND_FILE);
        return 1;
    }
    if((fp3 = fopen(THIRD_FILE, "w")) == NULL) {
        printf("%s could not be opened\n", THIRD_FILE);
        return 1;
    }

    int c;
    while ((c = getc(fp1)) != EOF) putc(c, fp3);
    while ((c = getc(fp2)) != EOF) putc(c, fp3);

    fclose(fp3);
    fclose(fp2);
    fclose(fp1);

    return 0;
}
