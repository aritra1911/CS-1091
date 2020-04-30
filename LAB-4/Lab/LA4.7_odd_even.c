// WAP to print all odd and even numbers separately within a given range. The
// range is input through user.
#include <stdio.h>

int main() {
    int ri, rf;

    printf("Enter range (<from> <to>): ");
    scanf("%d %d", &ri, &rf);
    
    printf("Odd\tEven\n");
    
    for (int i=ri; i<=rf; i++) {
        if (i&1) printf("%d", i);
        else printf("\t%d\n", i);
    }
    
    if (rf&1) putchar('\n');
    
    return 0;
}
