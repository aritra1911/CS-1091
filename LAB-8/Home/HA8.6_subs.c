// WAP to find the number of times that a given word (i.e. a short string)
// occurs in a sentence (i.e. a long string!).
#include <stdio.h>
#include <string.h>

#define BUFFER 200

int substr(char*, char*);

int main() {
    char str1[BUFFER], str2[BUFFER];

    printf("Enter your text:\n");
    scanf("%[^\n]", str1);
    
    putchar(getchar());

    printf("Enter word:\n");
    scanf("%[^\n]", str2);

    putchar(getchar());

    int si = substr(str1, str2);

    int k = 0;
    for (int i=0; str1[i] != '\0'; i++) {
        if (i == si) {
            k++;
            i += strlen(str2) - 1;
            si = substr(str1+i+1, str2) + i + 1;
            continue;
        }
    }

    printf("%d times\n", k);
    
    return 0;
}

int substr(char* str1, char* str2) {
    int l1=strlen(str1), l2=strlen(str2);

    for (int i=0; i<=(l1-l2); i++)
        for (int j=0; ; j++) {
            if (str2[j] == '\0') return i;
            if (str1[i+j] != str2[j]) break;
        }

    return -1;
}
