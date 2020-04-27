// WAP to print a given string in an alphabetical order
#include <stdio.h>
#include <string.h>
#define MAX 100

void swap(char*, char*);

int main() {
    char str[MAX];

    printf("Enter string:\n");
    scanf("%[^\n]", str);

    putchar(getchar());

    int n = strlen(str);
    for (int i=0; i<n-1; i++)
        for (int j=0; j<n-i-1; j++)
            if (str[j] > str[j+1])
                swap(&str[j], &str[j+1]);

    printf("Here's your sorted string:\n%s\n", str);

    return 0;
}

void swap(char* c1, char* c2) { char c = *c1; *c1 = *c2; *c2 = c; }
