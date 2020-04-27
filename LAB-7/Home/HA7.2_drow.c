// WAP to take a sentence as input and reverse every word of the sentence.
#include <stdio.h>
#include <ctype.h>

#define BUFFER 100

void reverse(char*, int, int);
void swap(char*, char*);

int main() {
    char str[BUFFER];

    printf("Enter a string:\n");
    scanf("%[^\n]", str);

    putchar(getchar());

    int i=0;
    for (int j=0; ; j++)
        if (isspace(str[j]) || str[j] == '\0') {
            reverse(str, i, j-1);
            if (str[j] == '\0') break;
            i = j+1;
        }

    printf("Reverse worded string:\n%s\n", str);

    return 0;
}

void reverse(char* str, int i, int f) {
    for (int j=0; j<=(f-i)/2; j++)
        swap(&str[i+j], &str[f-j]);
}

void swap(char* c1, char* c2) { char c = *c1; *c1 = *c2; *c2 = c; }
