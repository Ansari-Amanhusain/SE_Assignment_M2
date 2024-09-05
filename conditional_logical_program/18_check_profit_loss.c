//Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>

main()
{
    int a, b, pl;

    printf("\n\n\t-------------- Calculate Profit and Loss ---------------");
    printf("\n\n\tEnter the Cost that you Purchase: ");
    scanf("%d", &a); 

    printf("\n\n\tEnter the Cost that you Sell: ");
    scanf("%d", &b); 

    // Calculate profit or loss
    pl = b - a; 

    if (pl > 0)
    {
        printf("\n\n\tYou have a Profit of Rupees %d", pl);
    }
    else if (pl < 0)
    {
        printf("\n\n\tYou have a Loss of Rupees %d", -pl); 
    }
    else
    {
        printf("\n\n\tYou have no loss and no profit...");
    }

     
}

