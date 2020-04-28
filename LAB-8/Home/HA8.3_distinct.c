// WAP to count distinct number of vowels and consonants present in a string
// using pointer.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int is_vowel(char);
void add_distinct(char, char*);

int main() {
    char str[MAX], dis[MAX];
    memset(dis, '\0', MAX);
    
    printf("Enter string:\n");
    scanf("%[^\n]", str);

    putchar(getchar());

    for (char* p=str; *p!='\0'; p++)
        add_distinct(*p, dis);

    for (char* p=dis; *p!='\0'; p++)
        if (isalpha(*p))
            printf("%s %c exists\n", is_vowel(*p) ? "Vowel" : "Consonant", *p);

    return 0;
}

int is_vowel(char c) {
    switch(tolower(c)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
    }
    return 0;
}

void add_distinct(char c, char* arr) {
    char* p;
    for(p=arr; *p!='\0'; p++)
        if (*p == c) return;
    *p++ = c;
}
