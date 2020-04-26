// WAP to read item details used in party and calculate all expenses, divide
// expenses in all friends equally.
#include <stdio.h>
#define MAX 100 //maximum items entry

//structure definition
typedef struct item_details
{
    char itemName[30];
    int quantity;
    float price;
    float totalAmount;
}item;

int main()
{
    item thing[MAX]; //structure variable
    int i,choice;
    int count=0;
    float expenses=0.0f;
    i=0;
    do
    {
        printf("\nEnter item-%2d details\n",i+1);
        printf("\nItem Name: ");
        fgets(thing[i].itemName, 30, stdin);
        printf("\nPrice: ");
        scanf("%f",&thing[i].price);
        printf("\nQuantity: ");
        scanf("%d",&thing[i].quantity);
        thing[i].totalAmount=(float)thing[i].quantity*thing[i].price;
        expenses += thing[i].totalAmount;
        i++;
        count++;
        printf("\nWant to more items (press 1): ");
        scanf("%d",&choice);
    }while(choice==1);
    printf("\n*********************Expenditure Bill**********************");
    printf("\nSl.\tItem Name\tPrice\tQuantity\tTotal Amount");
    printf("\n---\t--------------\t------\t----------\t-----------------");
    for(i=0; i<count; i++)
    {
        printf("%-30s\t %.2f \t %3d \n %.2f\n",thing[i].itemName, thing[i].price, thing[i].quantity,
        thing[i].totalAmount);
    }
    printf("\n--------------------------------------------------------------------------------------");
    printf("\n                                                    Total expense: Rs.%.2f\n",expenses);
    int n;
    printf("\nHow many friends to pay the expences:");
    scanf("%d",&n);
    printf("\nEach friend will have to pay:Rs. %.2f\n",(expenses/(float)n));
    return 0;
}
