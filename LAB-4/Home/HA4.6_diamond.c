// WAP to display the following style o/p for a given string input through
// keyboard.(Ex.for a
// string “KIITCSIT”)
// KIITCSITTISCTIIK
// KIITCSI  ISCTIIK
// KIITCS    SCTIIK
// KIITC      CTIIK
// KIIT        TIIK
// KII          IIK
// KI            IK
// K              K
// KI            IK
// KII          IIK
// KIIT        TIIK
// KIITC      CTIIK
// KIITCS    SCTIIK
// KIITCSI  ISCTIIK
// KIITCSITTISCTIIK
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);
    
    int l = strlen(str);

    for (int i=0; i<l; i++) {
        int j;
        for (j=0; j<(l-i); j++)
            putchar(str[j]);
        for (int k=0; k<i; k++)
            printf("  ");
        while (j--)
            putchar(str[j]);
        putchar('\n');
    }
    for (int i=l-2; i>=0; i--) {
        int j;
        for (j=0; j<(l-i); j++)
            putchar(str[j]);
        for (int k=0; k<i; k++)
            printf("  ");
        while (j--)
            putchar(str[j]);
        putchar('\n');

    }
}
