// WAP to replace all occurrences of a substring in a given string with a new
// one.
#include <stdio.h>
#include <string.h>

#define BUFFER 200

int substr(char*, char*);

int main() {
    char str1[BUFFER], str2[BUFFER], strr[BUFFER], strres[BUFFER];

    printf("Enter your text:\n");
    scanf("%[^\n]", str1);
    
    putchar(getchar());

    printf("Enter text to replace:\n");
    scanf("%[^\n]", str2);

    putchar(getchar());

    int si;
    if ((si = substr(str1, str2)) == -1) {
        printf("Substring not found\n");
        return 1;
    }

    printf("Enter text to replace with:\n");
    scanf("%[^\n]", strr);

    putchar(getchar());


    char* p = strres;
    for (int i=0; str1[i] != '\0'; i++) {
        if (i == si) {
            for(int j=0; strr[j] != '\0'; j++)
                *p++ = strr[j];
            i += strlen(str2) - 1;
            si = substr(str1+i+1, str2) + i + 1;
            continue;
        }
        *p++ = str1[i];
    }
    *p++ = '\0';

    printf("Here's your modified text:\n%s\n", strres);
    
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
