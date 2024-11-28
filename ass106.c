// CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
// PRICE AND AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
// PRICE AS INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.

#include <stdio.h>

struct Item
{
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

void calculateAmount(struct Item *item)
{
    item->amount = item->quantity * item->price;
}

int main()
{
    struct Item item;

    printf("Enter item name: ");
    fgets(item.item_name, sizeof(item.item_name), stdin);

    printf("Enter quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter price: ");
    scanf("%f", &item.price);

    calculateAmount(&item);

    printf("\nItem Name: %s", item.item_name);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);
    printf("Amount: %.2f\n", item.amount);

    return 0;
}
