//19. Pattern

#include <stdio.h>

main() 
{
    int r = 1, c;
    printf("\n\n\t");

    while (r <= 5) 
	{
        c = r;
        while (c < 5) 
		{
            printf("  ");
            c++;
        }

        c = 1;
        while (c <= (2 * r - 1)) 
		{
            printf("* ");
            c++;
        }

        printf("\n\t");
        r++;
    }

}


