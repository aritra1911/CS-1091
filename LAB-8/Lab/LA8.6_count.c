// WAP to count vowels and consonants in a string using pointer.
#include <stdio.h>
#include <ctype.h>

#define BUFFER 100

int vowel(char);

int main() {
    char str[BUFFER];
    int vowels=0, cons=0;

    printf("Enter your text:\n");
    scanf("%[^\n]", str);
    
    putchar(getchar());

    for (char* p=str; *p!='\0'; p++)
        if (isalpha(*p)) {
            if (vowel(*p)) vowels++;
            else cons++;
        }
 
    printf("# of vowels : %d\n", vowels);
    printf("# of consonants : %d\n", cons);

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
