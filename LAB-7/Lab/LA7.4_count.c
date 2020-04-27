// Write a program to count the number of characters, alphabets, tabs, newlines,
// words, vowels, consonants present in a in a string.
#include <stdio.h>
#include <ctype.h>

#define BUFFER 100

typedef struct {
    int chars, alphas, tabs, nls, words, vowels, cons;
} Count;

int vowel(char);

int main() {
    char str[BUFFER];
    Count k = { 0, 0, 0, 0, 0, 0, 0 };

    printf("Enter your text:\n");
    scanf("%[^\n]", str);
    
    putchar(getchar());

    for (char* p=str; *p!='\0'; p++) {
        k.chars++;  // all are characters
        if (isalpha(*p)) {
            k.alphas++;
            if (vowel(*p)) k.vowels++;
            else k.cons++;
        } else if (isspace(*p)) {
            k.words++;
            if (*p == '\t') k.tabs++;
            else if (*p == '\n') k.nls++;
        }
    }
    k.words++;  // 1 plus the no. of spaces
    k.chars++;  // '\0' is also a charcter

    printf("# of characters : %d\n", k.chars);
    printf("# of alphabets : %d\n", k.alphas);
    printf("# of tabs : %d\n", k.tabs);
    printf("# of newlines : %d\n", k.nls);
    printf("# of words : %d\n", k.words);
    printf("# of vowels : %d\n", k.vowels);
    printf("# of consonants : %d\n", k.cons);

    return 0;
}

int vowel(char c) {
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
