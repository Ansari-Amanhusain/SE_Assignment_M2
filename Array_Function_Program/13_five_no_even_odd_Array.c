//WAP to accept 5 Number from user and checked entered number is odd or even
#include <stdio.h>

main()
{
    int num[5], i;

    printf("\n\n\tEnter Any 5 Numbers----------------------");
    
    for(i = 0; i < 5; i++)
    {
        printf("\n\n\tEnter number[%d] : ", i + 1);
        scanf("%d", &num[i]);
    }
    
    printf("\n\n\tDisplay Even Numbers-----------------------");
    for(i = 0; i < 5; i++)
    {
        if(num[i] % 2 == 0) // Checked Even Number
        {
            printf("\n\n\tEven Number[%d] : %d", i + 1, num[i]); // Display Even number
        }
    }
    
    printf("\n\n\tDisplay Odd Numbers-----------------------");
    for(i = 0; i < 5; i++)
    {
        if(num[i] % 2 != 0) // Checked Odd Number
        {
            printf("\n\n\tOdd Number[%d] : %d", i + 1, num[i]); // Display Odd number
        }
    }
}

