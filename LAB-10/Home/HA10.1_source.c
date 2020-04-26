// WAP which produces its own source code as its output.

#include <stdio.h>

int main() {
    FILE* fp;
    if ((fp = fopen(__FILE__, "r")) == NULL) {
        printf("%s could not be opened\n", __FILE__);
        return 1;
    }

    int c;
    while ((c = getc(fp)) != EOF) putchar(c);

    fclose(fp);
}
