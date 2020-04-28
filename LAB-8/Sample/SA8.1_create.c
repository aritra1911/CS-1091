// WAP to create, initialize, assign and access a pointer variable.
#include <stdio.h>
int main()
{
    int num; /*declaration of integer variable*/
    int *ptr; /*declaration of integer pointer*/
    ptr=&num; /*assigning address of num*/
    num=20; /*assigning 20 to variable num*/
    /*Access value and address using variable num*/
    printf("\nUsing variable num:");
    printf("\nValue of variable num: %d", num);
    printf("\nAddress of variable num: %u",&num);
    /*Access value and address using pointer variable num*/
    printf("\n\nUsing pointer variable:");
    printf("\nValue of variable num: %d", *ptr);
    printf("\nAddress of variable num: %u",ptr);
    return 0;
}
