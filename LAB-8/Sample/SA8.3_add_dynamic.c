// WAP to add two numbers using pointers.
/*By using dynamic memory allocation to store
 * two numbers and pointers*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *x, *y, sum;
    x=(int*)malloc(sizeof(int));
    y=(int*)malloc(sizeof(int));
    printf("\nEnter two integers to add:");
    scanf("%d%d", x, y);
    sum = *x + *y;
    printf("\nSum of %d and %d is %d",*x, *y, sum);
    free(x); free(y);
    return 0;
}
