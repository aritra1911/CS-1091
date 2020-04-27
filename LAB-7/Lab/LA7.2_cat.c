// Write a program to concatenate two strings without using any library
// function.
#include <stdio.h>
#include <stdlib.h>

#define BUFFER 100

char* cat(char*, char*);
int len(char*);

int main() {
    char str1[BUFFER], str2[BUFFER];

    printf("Enter your text:\n");
    scanf("%[^\n]", str1);
    
    putchar(getchar());

    printf("Enter your text:\n");
    scanf("%[^\n]", str2);

    putchar(getchar());
    
    printf("Concatenated text:\n%s\n", cat(str1, str2));
    return 0;
}

char* cat(char* str1, char* str2) {
    int l1=len(str1), l2=len(str2);
    char* str_cat = malloc(l1 + l2 + 1);
    char* p = str_cat;
    
    for (int i=0; i<l1; i++)
        *p++ = str1[i];
    for (int i=0; i<l2; i++)
        *p++ = str2[i];
    *p++ = '\0';

    return str_cat;
}

int len(char* str) {
    int l;
    for (l=0; str[l] != '\0'; l++);
    return l;
}
