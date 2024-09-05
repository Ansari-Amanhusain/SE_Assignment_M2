/*
Calculate 5 numbers from user and calculate number of even and odd using
of while loop
*/
#include <stdio.h>

main() 
{
    int n[5], i = 0, evencount = 0, oddcount = 0;

    // Enter Five Numbers
    printf("\n\n\tEnter any five numbers: ");
    while (i < 5) 
	{
        printf("\n\n\tEnter number %d: ", i + 1 );
        scanf("%d", &n[i]);
        i++;
    }

    i = 0;
    while (i < 5) 
	{
        if (n[i] % 2 == 0) 
		{
            evencount++;
        } else {
            oddcount++;
        }
        i++;
    }

    printf("\n\n\t-------------Details-----------------");
    printf("\n\n\tTotal Even Numbers is        = %d", evencount);
    printf("\n\n\tTotal Odd Numbers is         = %d", oddcount);

}


