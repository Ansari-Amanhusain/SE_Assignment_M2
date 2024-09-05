//27). 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n
#include <stdio.h>
main() 
{
    int n, i;
    float sum = 0.0;

    printf("\n\n\tFor example:- 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n");
    // Take Input
    printf("\n\n\tEnter the Number of Series: ");
    scanf("%d", &n);

    if (n > 0) 
	{
        for (i = 1; i <= n; i++) 
		{
            if (i % 2 != 0) 
			{
                
                sum += (float)i / (i + 1);
            } 
			else 
			{
                sum -= (float)i / (i + 1);
            }

            printf("\n\n\tCurrent Sum after %d terms: %.2f", i, sum);
        }
    } 
	else 
	{
        printf("\n\n\tPlease Enter a valid number");
    }

    printf("\n\n\tSum of Series 1 to %d is = %.2f\n", n, sum);
}

