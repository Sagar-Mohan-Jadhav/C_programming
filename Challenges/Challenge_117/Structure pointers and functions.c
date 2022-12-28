#include <stdio.h>
#include <string.h>

struct item
    {
        char itemName[50];
        int quantity;
        float price;
        float ammount;
    };

void readItem(struct item *newItem)
{
    printf("Enter the name of item.\n");
    scanf("%s", (*newItem).itemName);
    printf("Enter the quantity of items.\n");
    scanf("%d", &(*newItem).quantity);
    printf("Enter the price of items.\n");
    scanf("%f", &(*newItem).price);
    (*newItem).ammount = (*newItem).price * (*newItem).quantity;
    return;
}

void printvalue(struct item *newitem2)
{
    printf("the name of item is %s.\n", (*newitem2).itemName);
    printf("the quantity of items is %d.\n", (*newitem2).quantity);
    printf("the price of items is %.2f.\n", (*newitem2).price);
    printf("the ammount is %.2f.\n", (*newitem2).ammount);
    return;
}

int main()
{
    struct item userItem;
    readItem(&userItem);
    printvalue(&userItem);
    return 0;
}
