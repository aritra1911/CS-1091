// WAP to reads a sentence and prints frequency of each of the vowels and total
// count of Consonants.
#include <stdio.h>
#include <ctype.h>

#define BUFFER 100

int vowel(char);

int main() {
    char str[BUFFER];
    int vowels[] = { 0, 0, 0, 0, 0 }, cons=0;

    printf("Enter your text:\n");
    scanf("%[^\n]", str);
    
    putchar(getchar());

    for (char* p=str; *p!='\0'; p++) {
        if (isalpha(*p)) {
            int vowel_i = vowel(*p);
            if (vowel_i != -1) vowels[vowel_i]++;
            else cons++;
        }
    }

    printf("Frequency of vowels:\n");
    printf("#a : %d\n", vowels[0]);
    printf("#e : %d\n", vowels[1]);
    printf("#i : %d\n", vowels[2]);
    printf("#o : %d\n", vowels[3]);
    printf("#u : %d\n", vowels[4]);
    printf("# of consonants : %d\n", cons);

    return 0;
}

int vowel(char c) {
    switch(tolower(c)) {
        case 'a': return 0;
        case 'e': return 1;
        case 'i': return 2;
        case 'o': return 3;
        case 'u': return 4;
    }
    return -1;
}
