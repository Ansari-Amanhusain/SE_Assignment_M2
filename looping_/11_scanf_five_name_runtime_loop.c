//Accept 5 names from user at run time.
#include<stdio.h>
main() {
    char names[5];
    int i;
    i = 0;

    printf("\n\n\t---------- Enter Five Names ------------- ");
    while (i < 5) 
	{
        printf("\n\n\t Name %d: ", i + 1);
        scanf("%s", &names[i]); 
        i++;
    }


	printf("\n\n\t------------------ Display the Names ----------------------");
    for(i=0;i<5;i++)
	{
        printf("\n\n\t Name %d: %s", i + 1, names[i]);
    }
}
