//28) 1 2 3 6 9 18 27 54...
#include <stdio.h>

main()
{
    int n, i;
    int a = 1;
    int multiplier = 2;
    
    printf("\n\n\tPrint pattern like this: 1 2 3 6 9 18 27 54...\n");
    printf("\n\tEnter the Number of Series: ");
    scanf("%d", &n);
    
    if (n > 0)
    {
        printf("\n\t");
        for (i = 1; i <= n; i++)
        {
            printf("%d ", a);
            a *= multiplier;
            multiplier = (multiplier == 2) ? 3 : 2;
        }
        printf("\n");
    }
    else
    {
        printf("\n\n\tPlease enter a positive number.\n");
    }

}

