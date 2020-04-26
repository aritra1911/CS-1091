// WAP to declare an union named as ABC having two members a as character and b
// as integer . Assign 'A' to a, 1088 to b respectively through an union variable
// ob one by one and display these these values immediately. Now assign these
// values to a, b through ob all together and display these values at last. Find
// the difference.
#include<stdio.h>
union ABC
{
    char a;
    int
    b;
};

int main()
{
    union ABC ob;
    printf("\nOccupied size by union ABC: %zu",sizeof(union ABC));
    printf("\nValue of a and b if value assigned to each member one by one and display immediately");
    ob.a='A';
    printf("\nValue of a:%c", ob.a);
    ob.b=1088;
    printf("\nValue of b:%d",ob.b);
    printf("\nValue of a and b if value assigned to each member together and display at last\n");
    ob.a='A';
    ob.b=1088;
    printf("\nValue of a:%c, b:%d",ob.a,ob.b);
    return 0;
}
