//Calculate sum of 10 numbers using of while loop
#include <stdio.h>

main() 
{
    int numbers[10], sum = 0, i;
    
    
    printf("\n\n\t-----------------Sum of Tens Number-----------------");
    printf("\n\n\tEnter 10 numbers:\n");
    i=1;
    while (i <= 10) {
        printf("\n\n\tNumber %d: ", i);
        scanf("%d", &numbers[i]);
        i++;
    }

    i = 1;
    while (i <= 10) {
        sum =sum + numbers[i];
        i++;
    }

    printf("\n\n\tThe sum of the 10 numbers is: %d\n", sum);

}

