//Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include <math.h>

main() 
{
    int num, originalNum, remainder, result = 0, n = 0;

    // Input Number
    printf("\n\n\tEnter an Number : ");
    scanf("%d", &num);

    originalNum = num;

    
    int temp = num;
    while (temp != 0) 
	{
        temp /= 10;
        ++n;
    }

    for (temp = num; temp != 0; temp /= 10) 
	{
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if (result == originalNum) {
        printf("\n\n\t%d is an Armstrong number.\n", originalNum);
    } else {
        printf("\n\n\t%d is not an Armstrong number.\n", originalNum);
    }

}


