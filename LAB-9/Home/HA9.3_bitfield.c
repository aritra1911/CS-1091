// WAP to extract individual bytes from an unsigned int using union.
#include <stdio.h>

typedef struct {
    unsigned byte0: 8;
    unsigned byte1: 8;
    unsigned byte2: 8;
    unsigned byte3: 8;
} Bytes;

typedef union {
    unsigned int data;
    Bytes bytes;
} Integer;

int main() {
    Integer i;
    printf("Enter an unsigned integer: ");
    scanf("%u", &i.data);
    printf("Byte #0: %u\n", i.bytes.byte0);
    printf("Byte #1: %u\n", i.bytes.byte1);
    printf("Byte #2: %u\n", i.bytes.byte2);
    printf("Byte #3: %u\n", i.bytes.byte3);
    return 0;
}
